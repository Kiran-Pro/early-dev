#include <iostream>

double add(double number_one, double number_two)
{
   
    return number_one + number_two;
}

double subtract(int number_one, int number_two)
{
    return number_one - number_two;
}

double multiply(int number_one, int number_two)
{
    return number_one * number_two;
}

double divide(int number_one, int number_two)
{
    return number_one / number_two;
}


double remainder(int number_one, int number_two)
{
    return number_one % number_two;
}



double calculate(double number_one, double number_two, char operation)
{
    if (operation == '+') {
        return add(number_one, number_two);
    } 
    else if (operation == '-') {
        return subtract(number_one , number_two);
    }
    if (operation == '*') {
        return multiply(number_one , number_two);
    }
    else if (operation == '/') {
        return divide(number_one , number_two);
    }
    else  {
        return remainder(number_one , number_two);
    }
    
}


void print_result(double result)
{
    std::cout << "result: " << result << std::endl;
}

bool is_valid(char operation)
{
    if (operation == '+' ||operation == '-' ||operation== '*' ||operation == '/' ||operation == '%') {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    char operation;
    double number1;
    double number2;


    std::cout << "First number: ";
    std::cin >> number1;

    std::cout << "Operator: ";
    std::cin >> operation;

    while (!is_valid(operation))
    {
        std::cout << "ERR: invalid operation \n Try again \n";
        std::cin >> operation;
    }

    std::cout << "Second number: ";
    std::cin >> number2;

    print_result(calculate(number1, number2, operation));

    return 0;
}