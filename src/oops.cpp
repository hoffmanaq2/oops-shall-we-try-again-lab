#include "../src/oops.hpp"
#include <iostream>

int getValidatedInt(int lowerBound, int upperBound, int defaultValue)
{
    std::string input;
    int value;
    bool valid = false;

    while (!valid)
    {
        std::cout << "Please enter a value. Enter \"default\" to use the default value of "
                  << defaultValue << " or \"exit\" to leave the menu." << std::endl;
        std::cin >> input;

        if (input == "exit")
        {
            exit(-9999); // exit code -9999 to show that user "exit"
             /*
             I decided to show an exit code of -9999 to show that the user exited.
             The reason why is because "-9999" is far out of bounds, and it shows that someone exited
             instead of using a default value or inputting a valid number.
             I found this to be the easiest solution instead of printing a prompt that the user exited.
             */

        }
        else if (input == "default")
        {
            value = defaultValue;
            valid = true;
        }
        else
        {
            try
            {
                value = std::stoi(input);
                if (value < lowerBound || value > upperBound)
                    std::cout << "Your value is invalid" << std::endl;
                else
                    valid = true;
            }
            catch (...)
            {
                std::cout << "Your value is invalid" << std::endl;
            }
        }
    }

    return value;
}