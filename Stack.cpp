#include "Stack.h"
#include <iostream>
#include <array>
#include <cassert>

void Stack::reset()
{
    m_next = 0;
}

bool Stack::push(int number)
{
    if (m_next == m_array.size())
        return false;
    
    m_array[m_next++] = number;
    return true;
}

int Stack::pop()
{
    assert(m_next > 0 && "Cannot pop empty stack");

    return m_array[m_next--];
}

void Stack::print()
{
    std::cout << "( ";
    for ( std::array<int, 10>::size_type i{0}; i < m_next; ++i )
    {
        std::cout << m_array[i] << ' ';
    }
    std::cout << " )\n";
}
