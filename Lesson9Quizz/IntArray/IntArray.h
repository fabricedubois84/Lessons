#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray
{
private:
    int m_length{0};
    int *m_array{ nullptr };

public:
    IntArray(int length);
    IntArray(const IntArray &array);

    ~IntArray();

    // operators
    int& operator[](const int index);
    IntArray& operator=(const IntArray &array);

    friend std::ostream& operator<<(std::ostream &out, const IntArray &array);


};

#endif // INTARRAY_H
