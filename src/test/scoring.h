#ifndef SCORING_H
#define SCORING_H

#include <vector>
#include "../models/question.h"

int scoreTest(const std::vector<Question>& questions,
              const std::vector<char>& answers);

#endif
