#include <iostream>
#include <vector>
#include "math_contents.h"
#include "../stats/statistics.h"
#include "../test/generator.h"
#include "../test/scoring.h"

void MathContents::showMainMenu() {
    std::cout << "=== Online Math School ===\n";
    std::cout << "1. Contents\n";
    std::cout << "2. Start Test\n";
    std::cout << "3. Statistics\n";
    std::cout << "4. Exit\n";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            showMathContents();
            break;
        case 2:
            startTest();
            break;
        case 3:
            stats.display();
            showMainMenu();
            break;
        case 4:
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid option.\n";
            break;
    }
}

void MathContents::showMathContents() {
    int choice;

    std::cout << "\n=== Math Contents ===\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Back to Main Menu\n";

    std::cout << "\nChoose a topic: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "\n--- Addition ---\n";
            std::cout << "Addition means combining numbers to get a total.\n";
            std::cout << "38 + 26 = 64.\n";
            break;

        case 2:
            std::cout << "\n--- Subtraction ---\n";
            std::cout << "Subtraction means taking one number away from another.\n";
            std::cout << "59 - 38 = 21.\n";
            break;

        case 3:
            std::cout << "\n--- Multiplication ---\n";
            std::cout << "Multiplication is repeated addition.\n";
            std::cout << "11 * 43 = 473.\n";
            break;

        case 4:
            std::cout << "\n--- Division ---\n";
            std::cout << "Division splits a number into equal parts.\n";
            std::cout << "99 / 3 = 33.\n";
            break;

        case 5:
            showMainMenu();
            return;

        default:
            std::cout << "Invalid option.\n";
            break;
    }

    // Pause before returning
    std::cout << "\nPress Enter to return...";
    std::cin.ignore();
    std::cin.get();

    showMathContents(); // return to contents menu
}
