#ifndef RGBA_H
#define RGBA_H

#include <cstdint>

class RGBA
{
    using component_type = std::uint_fast8_t;
private:
    component_type m_red;
    component_type m_green;
    component_type m_blue;
    component_type m_alpha;

public:
    RGBA(component_type red = 0, component_type green = 0, component_type blue = 0, component_type alpha = 255);

    void print();

};

#endif // RGBA_H