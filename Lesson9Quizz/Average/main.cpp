#include "Average.h"
#include <iostream>

int main(int argc, char *argv[])
{
    Average avg{};

    avg += 4;
    std::cout << avg << '\n';

    avg += 8;
    std::cout << avg << '\n';

    avg += 24;
    std::cout << avg << '\n';
    
    avg += -10;
    std::cout << avg << '\n';
    
    (avg += 6) += 10;
    std::cout << avg << '\n';
    

    Average copy{ avg };
    std::cout << copy << '\n';

    return 0;
}
