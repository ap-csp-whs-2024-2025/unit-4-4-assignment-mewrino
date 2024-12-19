#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Complete the homework problems here
    
    // Problem 1
    int number; 
    std::cout << "enter a number from 1 - 100: ";
    std::cin >> number;

    while (number < 1 || number > 100)
    {
        std::cout << "number entered is invalid, please enter a number from 1 - 100: ";
        std::cin >> number;
    }
    std::cout << "thank you for your input" << std::endl;
    // Problem 2
    std::string favoriteColor = "purple";
    std::string guess;
    int attempts = 1;

    std::cout << "guess my favorite color: ";
    std::cin >> guess;

    while (guess != favoriteColor)
    {
        std::cout << "incorrect! try again: ";
        std::cin >> guess;
        attempts = attempts + 1;
    }
    
    std::cout << "correct! you guessed my favorite color in " << attempts << "attempt(s)." << std::endl;
    
    // Problem 3
    
    
    
    return 0;
}
