#include "HelloWorld.h"
#include <iostream>

HelloWorld::HelloWorld()
{
    m_data = new char[14];
    const char *init{ "Hello, World!" };
    for (int i = 0; i < 14; ++i)
        m_data[i] = init[i];
}

HelloWorld::~HelloWorld()
{
    delete[] m_data;
}

void HelloWorld::print() const
{
    std::cout << m_data << '\n';
}

