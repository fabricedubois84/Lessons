#ifndef INTARRAY_H
#define INTARRAY_H

#include <cassert>
#include <initializer_list>

class IntArray
{
private:
    int m_length{};
    int *m_data{};

public:
// constructors
    IntArray() = default;

    IntArray(int length): m_length{ length }
    {
        assert(length >= 0);

        if (length > 0)
            m_data = new int[length]{};
    }

    IntArray(std::initializer_list<int> list): IntArray(static_cast<int>(list.size()))
    {
        int count{0};

        for (auto element : list)
        {
            m_data[count] = element;
            ++count;
        }

    }

    IntArray(const IntArray&) = delete;

// destructor
    ~IntArray()
    {
        delete[] m_data;
    }

    void erase()
    {
        delete[] m_data;

        m_data = nullptr;
        m_length = 0;
    }

// accessors
    int getLength() const { return m_length; }


// member functions
    void reallocate(int newLength);

    void resize(int newLength);

    void insertBefore(int value, int index);
    
    void remove(int index);

    void insertAtBeginning(int value);

    void insertAtEnd(int value);


// operators
    IntArray& operator=(const IntArray& list) = delete;
    IntArray& operator=(std::initializer_list<int> list);

    int& operator[](int index);

};

#endif // INTARRAY_H

















