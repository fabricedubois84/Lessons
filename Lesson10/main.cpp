#include "IntArray.h"
#include <iostream>

int main (int argc, char *argv[])
{
    IntArray array { 5, 4, 3, 2, 1 };

    for ( int count{0}; count < array.getLength(); ++count )
        std::cout << array[count] << ' ';

    std::cout << '\n';

    array = { 1, 3, 5, 7, 9, 11 };

    for ( int count{0}; count < array.getLength(); ++count )
        std::cout << array[count] << ' ';

    std::cout << '\n';

    return 0;
}