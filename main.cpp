#include <iostream>
#include "src/oops.hpp"

int main()
{
    //example valid range is from 0 to 100
    int chosen_value = get_validated_int (0, 100);
    std::cout << "\nThe value chosen by the user is " << chosen_value << std::endl;

    return 0;
}
