#ifndef AVERAGE_H
#define AVERAGE_H

#include <iostream>
#include <cstdint>

class Average
{
private:
    std::int_least32_t m_total{0};
    std::int_least8_t m_numbers{0};

public:
    Average()
    {}

    Average& operator+=(int num);

    friend std::ostream& operator<<(std::ostream &out, const Average &average);


};

#endif // AVERAGE_H
