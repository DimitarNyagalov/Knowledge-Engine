#include <iostream>
using namespace std;

// Declare the external functions from other files
int contentsMain();
int testMain();

int main() {
    int choice = 0;

    while (true) {
        cout << "\n=== MAIN MENU ===\n";
        cout << "1. View contents\n";
        cout << "2. Do a test\n";
        cout << "3. Exit\n";
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                contentsMain();
                break;

            case 2:
                testMain();
                break;

            case 3:
                cout << "Exiting program...\n";
                return 0;

            default:
                cout << "Invalid option. Try again.\n";
        }
    }
}
