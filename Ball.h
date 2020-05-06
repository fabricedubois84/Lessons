#ifndef BALL_H
#define BALL_H

#include <string>

class Ball
{
private:
    std::string m_color{ "Black" };
    double m_radius{ 10.0 };

public:
    Ball() = default;
    Ball(const std::string &color, double radius);
    Ball(const std::string &color);
    Ball(double radius);

    void print();

};

#endif // BALL_H