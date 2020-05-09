#include "IntPair.h"
#include <iostream>

void IntPair::set(int first, int second)
{
    m_first = first;
    m_second = second;
}

void const IntPair::print()
{
    std::cout << "Pair(" << m_first << ", " << m_second << ")\n";
}
