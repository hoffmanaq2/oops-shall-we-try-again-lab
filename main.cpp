#include <iostream>
#include "src/oops.hpp"

#include <iostream>

int main()
{
    int chosenValue = getValidatedInt(0, 100, 100);

    std::cout << "\nThe value chosen by the user is " << chosenValue << std::endl;
    return 0;
}
