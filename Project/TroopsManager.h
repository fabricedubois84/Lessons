#ifndef TROOPSMANAGER_H
#define TROOPSMANAGER_H

#include "Troop.h"
#include <map>
#include <functional>
#include <iostream>

class TroopsManager
{
private:
    std::map<int, Troop&> m_troops;
    int m_length{};

public:
// constructors
    TroopsManager()
    {
        m_length = m_troops.size();
std::cout << "TroopsManager m_length = " << m_length << '\n';
    }

    TroopsManager(const TroopsManager&) = delete;


// member functions
    void add(Troop &troop);
    void remove(const int index);
    int size() const;

// operators
    Troop& operator[] (const int index);
    friend std::ostream& operator<<( std::ostream &out, const TroopsManager &list );

};

#endif // TROOPSMANAGER_H
