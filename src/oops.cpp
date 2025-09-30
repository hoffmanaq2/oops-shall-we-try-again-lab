#include "../src/oops.hpp"
#include <iostream>

int get_validated_int(int lower_bound, int upper_bound)
{
    int value;
    bool valid = false;

    while (!valid)
    {
        std::cout << "Please enter a value" << std::endl;
        std::cin >> value;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Your value is invalid" << std::endl;
        }
        else if (value < lower_bound || value > upper_bound)
        {
            std::cout << "Your value is invalid" << std::endl;
        }
        else
        {
            valid = true;
        }
    }

    return value;
}
