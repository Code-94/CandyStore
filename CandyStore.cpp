// CandyStore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int stockM = 0;
    int stockT = 0;
    int stockL = 0;
    char input;
    int number;

    std::cout << "Welcome to the candy store !!!" << std::endl;
    std::cout << "What candy would you like to buy ? " << std::endl;
    std::cin >> input;

    if (input == 'm' && stockM > 0) {
        std::cout << "How many do want ?? : " << std::endl;
        std::cin >> number;
    }
    else if (input == 't' && stockT > 0) {
        std::cout << "How many do want ?? : " << std::endl;
        std::cin >> number;
    }
    else if (input == 'l' && stockL > 0) {
        std::cout << "How many do want ?? : " << std::endl;
        std::cin >> number;
    }
    else if (stockM == 0 || stockT == 0 || stockL = 0) {
        std::cout << "One of the tank needs to be refilled" << std::endl;
    }
    else {
        std::cout << "Guess you are not hungry..." << std::endl;
    }

    std::cout << "Thank you for your visit!!!" << std::endl;
}

