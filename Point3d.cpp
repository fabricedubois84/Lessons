#include "Point3d.h"
#include <iostream>

void Point3d::setValues(int x, int y, int z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

void const Point3d::print()
{
    std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
}

bool Point3d::isEqual(Point3d &point) const
{
    return ( (m_x == point.m_x) && (m_y == point.m_y) && (m_z == point.m_z) );
}
