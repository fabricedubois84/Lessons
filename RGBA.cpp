#include "RGBA.h"
#include <iostream>

RGBA::RGBA(component_type red, component_type green, component_type blue, component_type alpha)
    : m_red{red}, m_green{green}, m_blue{blue}, m_alpha{alpha}
{
}

void RGBA::print()
{
    std::cout << "r=" << static_cast<int>(m_red)
        << " g=" << static_cast<int>(m_green)
        << " b=" << static_cast<int>(m_blue)
        << " a=" << static_cast<int>(m_alpha)
        << "\n";
}
