// Taha Rahman

#include <iostream>

double performOperation(double num1, double num2, char operation)
{
    switch (operation)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
    case 'x':
    case 'X':
        return num1 * num2;
    case '/':
        if (num2 == 0)
        {
            std::cout << "ERROR: Cannot divide by zero." << std::endl;
            return 0;
        }
        else
        {
            return num1 / num2;
        }
    default:
        std::cout << "Invalid operation." << std::endl;
        return 0;
    }
}

int main()
{
    double firstNumber, secondNumber, result;
    char operation;

    while (true)
    {
        std::cout << "Enter the first number: ";
        std::cin >> firstNumber;
        std::cout << "Enter the second number: ";
        std::cin >> secondNumber;
        std::cout << "Enter the operation (+, -, *, /): ";
        std::cin >> operation;

        result = performOperation(firstNumber, secondNumber, operation);

        if (operation == '/' && secondNumber == 0)
        {
        
        }
        else
        {
            std::cout << firstNumber << " " << operation << " " << secondNumber << " = " << result << std::endl;
        }
    }

    return 0;
}