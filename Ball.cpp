#include "Ball.h"
#include <iostream>

Ball::Ball(const std::string &color, double radius): m_color(color), m_radius(radius)
{
}

Ball::Ball(const std::string &color): m_color{color}
{
}

Ball::Ball(double radius): m_radius(radius)
{
}

void Ball::print()
{
    std::cout << "Color: " << m_color << ", Radius: " << m_radius << "\n";
}
