

// to be implemented

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
    std::cout << "Result: " << num1 * num2 << "\n";
}

void divide() {
    double num1, num2;
    
    std::cout << "Enter two numbers to divide: ";
    std::cin >> num1 >> num2;
    if (num2 != 0) {
        std::cout << "Result: " << num1 / num2 << "\n";
    } else {
        std::cout << "Error: Division by zero is not allowed.\n";
    }
    
}


