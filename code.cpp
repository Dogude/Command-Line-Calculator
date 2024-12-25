#include <iostream>

void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;

    std::cout << "Calculator Menu:\n";
    std::cout << "1. Addition (+)\n";
    std::cout << "2. Subtraction (-)\n";
    std::cout << "3. Multiplication (*)\n";
    std::cout << "4. Division (/)\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        default:
            std::cout << "Invalid choice.\n";
            break;
    }

    return 0;
}
