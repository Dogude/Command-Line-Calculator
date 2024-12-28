#include <iostream>

void add() { 
    double num1, num2; 
    std::cout << "Enter two numbers to add: "; 
    std::cin >> num1 >> num2; 
    std::cout << "Result: " << num1 + num2 << "\n"; 

}

void subtract() { 
    double num1, num2; 
    std::cout << "Enter two numbers to subtract: "; 
    std::cin >> num1 >> num2; 
    std::cout << "Result: " << num1 - num2 << "\n"; 
}

void multiply() { 
    double num1, num2; 
    std::cout << "Enter two numbers to multiply: "; 
    std::cin >> num1 >> num2; 
    std::cout << "Result: " << num1 * num2 << "\n"; }

void divide() { 
    double num1, num2; 
    std::cout << "Enter two numbers to divide: "; 
    std::cin >> num1 >> num2; 
    if (num2 != 0) 
    { 
        std::cout << "Result: " << num1 / num2 << "\n"; 
    } 
    else 
    { 
        std::cout << "Error: Division by zero is not allowed.\n";
    } 
}

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
