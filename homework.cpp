#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Complete the homework problems here
    
    // Problem 1
    int number; 
    std::cout << "enter a number from 1 - 100: "
    std::cin >> number;

    while (number < 1 || number > 100)
    {
        std::cout << "number entered is invalid, please enter a number from 1 - 100: ";
        std::cin >> number;
    }
    std::cout << "thank you for your input" << std::endl;
    // Problem 2
    
    
    // Problem 3
    
    
    
    return 0;
}
