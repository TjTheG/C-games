#include <iostream>

int main () 
{
int number1;
int number2;    
int choice;
std::cout << "Choose 2 numbers" << std::endl;
std::cout << "Choose first number: " << std::endl;
std::cin >> number1;
std::cout << "Choose second number: " << std::endl;
std::cin >> number2;

std::cout << "Choose an operation: " << std::endl;
std::cout << "1: Add" << std::endl;
std::cout << "2: Substract" << std::endl;
std::cout << "3: Multiply" << std::endl;
std::cout << "4: Substract" << std::endl;

std::cin >> choice;
if (choice ==1)
{
    std::cout << "You've chosen addition" << std::endl;
    std::cout << number1 + number2 << " is the result" << std::endl;
}
if (choice ==2)
{
    std::cout << "You've chosen substract" << std::endl;
    std::cout << number1 - number2 << " is the result" << std::endl;
}

if (choice ==3)
{
    std::cout << "You've chosen multiply" << std::endl;
    std::cout << number1 * number2 << " is the result" << std::endl;
}

if (choice ==4)
{
    std::cout << "You've chosen divide" << std::endl;
    std::cout << number1 / number2 << " is the result" << std::endl;
}


}