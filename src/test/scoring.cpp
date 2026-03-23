#include "scoring.h"

int scoreTest(const std::vector<Question>& questions,
              const std::vector<char>& answers) {

    int score = 0;

    for (size_t i = 0; i < questions.size(); i++) {
        if (answers[i] == questions[i].correctOption)
            score++;
    }

    return score;
}
