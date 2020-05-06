#ifndef STACK_H
#define STACK_H

#include <array>

class Stack
{
private:
    std::array<int, 10> m_array;
    std::array<int, 10>::size_type m_next{0};

public:
    void reset();
    bool push(int number);
    int pop();
    void print();


};

#endif // STACK_H