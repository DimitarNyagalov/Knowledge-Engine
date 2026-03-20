#include <iostream>
#include <cstdlib>
#include <ctime>
#include "test.h"
using namespace std;

void testMain() {
    srand(time(0));

    int difficulty;
    int NUM_QUESTIONS;

    cout << "Select difficulty:\n";
    cout << "1. Beginner (10 questions)\n";
    cout << "2. Intermediate (20 questions)\n";
    cout << "3. Expert (30 questions)\n";
    cout << "Enter choice: ";
    cin >> difficulty;

    switch (difficulty) {
        case 1:
            NUM_QUESTIONS = 10;
            break;
        case 2:
            NUM_QUESTIONS = 20;
            break;
        case 3:
            NUM_QUESTIONS = 30;
            break;
        default:
            cout << "Invalid choice. Defaulting to Beginner.\n";
            NUM_QUESTIONS = 10;
    }

    int score = 0;

    for (int i = 1; i <= NUM_QUESTIONS; i++) {
        int a, b;

        // Difficulty affects number size
        if (difficulty == 1) {          // Beginner
            a = rand() % 20 + 1;
            b = rand() % 20 + 1;
        } else if (difficulty == 2) {   // Intermediate
            a = rand() % 50 + 1;
            b = rand() % 50 + 1;
        } else {                        // Expert
            a = rand() % 100 + 1;
            b = rand() % 100 + 1;
        }

        int op = rand() % 4;

        int correctAnswer;
        cout << "Question " << i << ": ";

        switch (op) {
            case 0:
                cout << a << " + " << b << " = ";
                correctAnswer = a + b;
                break;

            case 1:
                cout << a << " - " << b << " = ";
                correctAnswer = a - b;
                break;

            case 2:
                cout << a << " * " << b << " = ";
                correctAnswer = a * b;
                break;

            case 3:
                // Ensure divisible division
                b = (difficulty == 3) ? (rand() % 20 + 1) : (rand() % 10 + 1);
                a = b * (rand() % 10 + 1);

                cout << a << " / " << b << " = ";
                correctAnswer = a / b;
                break;
        }

        int userAnswer;
        cin >> userAnswer;

        if (userAnswer == correctAnswer) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong. Correct answer: " << correctAnswer << "\n\n";
        }
    }

    cout << "Your final score: " << score << " / " << NUM_QUESTIONS << endl;
}

