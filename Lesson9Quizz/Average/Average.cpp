#include "Average.h"
#include <cstdint>
#include <iostream>

Average& Average::operator+=(int num)
{
    m_total += num;
    ++m_numbers;

    return *this;
}



std::ostream& operator<<(std::ostream &out, const Average &average)
{
    out << static_cast<double>(average.m_total) / average.m_numbers;

    return out;
}


