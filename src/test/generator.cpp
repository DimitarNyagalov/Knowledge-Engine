#include "generator.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <random>

Question generateRandomQuestion() {
    int a = rand() % 50 + 1;
    int b = rand() % 50 + 1;
    int op = rand() % 3;

    int correctAnswer;
    std::string text;

    switch (op) {
        case 0:
            text = std::to_string(a) + " + " + std::to_string(b);
            correctAnswer = a + b;
            break;

        case 1:
            text = std::to_string(a) + " - " + std::to_string(b);
            correctAnswer = a - b;
            break;

        case 2:
            text = std::to_string(a) + " * " + std::to_string(b);
            correctAnswer = a * b;
            break;
    }

    // Generate wrong answers
    int wrong1 = correctAnswer + (rand() % 10 + 1);
    int wrong2 = correctAnswer - (rand() % 10 + 1);

    std::vector<int> options = { correctAnswer, wrong1, wrong2 };

    // Shuffle options
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(options.begin(), options.end(), g);


    // Determine correct letter
    char correctLetter;
    if (options[0] == correctAnswer) correctLetter = 'A';
    else if (options[1] == correctAnswer) correctLetter = 'B';
    else correctLetter = 'C';

    return Question(text, options, correctLetter);
}
