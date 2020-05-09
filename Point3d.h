#ifndef POINT3D_H
#define POINT3D_H 

class Point3d 
{
private:
    int m_x, m_y, m_z;

public:
    void setValues(int x, int y, int z);
    void const print();
    bool isEqual(Point3d &point) const;
};

#endif // POINT3D_H