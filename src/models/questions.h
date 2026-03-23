#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>

class Question {
public:
    std::string text;
    std::vector<int> options;   // A, B, C choices
    char correctOption;         // 'A', 'B', or 'C'

    Question() = default;
    Question(const std::string& t, const std::vector<int>& opts, char correct);

    void display(int number) const;

};

#endif
