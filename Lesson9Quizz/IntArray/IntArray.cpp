#include "IntArray.h"
#include <iostream>
#include <cassert>

IntArray::IntArray(int length): m_length{length}
{
    assert(length > 0 && "IntArray length must not be negative");

    m_array = new int[m_length]{};
}

IntArray::IntArray(const IntArray &array): m_length{array.m_length}
{
    m_array = new int[m_length]{};

    for (int count{0}; count < array.m_length; ++count)
    {
        m_array[count] = array.m_array[count];
    }
}

IntArray::~IntArray()
{
    delete[] m_array;
}


// operators

int& IntArray::operator[](const int index)
{
    assert(index >= 0);
    assert(index < m_length);

    return m_array[index];
}

IntArray& IntArray::operator=(const IntArray &array)
{
    if (this == &array)
        return *this;

    delete[] m_array;

    m_length = array.m_length;

    m_array = new int[m_length]{};

    for (int count{0}; count < array.m_length; ++count)
    {
        m_array[count] = array.m_array[count];
    }

    return *this;
}


std::ostream& operator<<(std::ostream &out, const IntArray &array)
{
    for (int count{0}; count < array.m_length; ++count)
    {
        out << array.m_array[count] << ' ';
    }

    return out;
}


