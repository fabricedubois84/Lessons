#include "Point2d.h"
#include <iostream>
#include <cmath>

void Point2d::print() const
{
    std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
}

double Point2d::distanceTo(const Point2d &p) const
{
    return sqrt((m_y - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
}
