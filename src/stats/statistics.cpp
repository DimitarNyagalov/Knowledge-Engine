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
