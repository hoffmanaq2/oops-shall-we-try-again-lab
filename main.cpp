#include <iostream>
#include "src/oops.hpp"

int main()
{
    // Example: valid range is from 0 to 100
    int chosenValue = get_validated_int (0, 100);
    std::cout << "\nThe value chosen by the user is " << chosenValue << std::endl;

    return 0;
}
