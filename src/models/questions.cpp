#include "question.h"
#include <iostream>

Question::Question(const std::string& t, const std::vector<int>& opts, char correct)
    : text(t), options(opts), correctOption(correct) {}

void Question::display(int number) const {
    std::cout << number << ". " << text << "\n";
    std::cout << "A) " << options[0] << "\n";
    std::cout << "B) " << options[1] << "\n";
    std::cout << "C) " << options[2] << "\n";
}

