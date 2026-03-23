#ifndef STATISTICS_H
#define STATISTICS_H

class Statistics {
public:
    int totalTests = 0;
    int totalCorrectAnswers = 0;
    int totalQuestionsAnswered = 0;
    int bestScore = 0;
    int worstScore = 20;

    void update(int score, int totalQuestions);
    void display() const;
};

extern Statistics stats;

#endif
