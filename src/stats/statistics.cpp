#include "statistics.h"
#include "../stats/statistics.h"
#include <iostream>

Statistics stats;

void Statistics::update(int score, int totalQuestions) {
    totalTests++;
    totalCorrectAnswers += score;
    totalQuestionsAnswered += totalQuestions;

    if (score > bestScore)
        bestScore = score;

    if (score < worstScore)
        worstScore = score;

}

void Statistics::display() const {
    std::cout << "\n=== Statistics ===\n";
    std::cout << "Total tests taken: " << totalTests << "\n";
    std::cout << "Best score: " << bestScore << "\n";
    std::cout << "Worst score: " << worstScore << "\n";

    if (totalQuestionsAnswered > 0) {
        double accuracy = (double)totalCorrectAnswers / totalQuestionsAnswered * 100.0;
        std::cout << "Overall accuracy: " << accuracy << "%\n";
    }

    std::cout << "\nPress Enter to return...";
    std::cin.ignore();
    std::cin.get();
}
