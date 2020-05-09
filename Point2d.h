#ifndef POINT2D_H
#define POINT2D_H

class Point2d
{
private:
    double m_x{0.0};
    double m_y{0.0};

public:
    Point2d(double x = 0.0, double y = 0.0): m_x(x), m_y(y)
    {
    }

    void print() const;

    double distanceTo(const Point2d &p) const;

    friend double distanceFrom(const Point2d &p1, const Point2d &p2);
};

#endif // POINT2D_H