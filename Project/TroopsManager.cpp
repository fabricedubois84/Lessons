#include "TroopsManager.h"
#include <cassert>
#include <iostream>

// member functions
void TroopsManager::add(Troop &troop)
{
std::cout << "Adding Troop to TroopManager at key index (" << troop.getId() << ")....\n";
    m_troops.insert( std::pair<int, Troop&>(troop.getId(), troop) );
    //++m_length;

std::cout << "Troop added. " << ++m_length << " Troops in map.\n";

}

void TroopsManager::remove(const int index)
{
    m_troops.erase(index);
    --m_length;
}

int TroopsManager::size() const
{
    return m_length;
}


// operators
Troop& TroopsManager::operator[](const int index)
{
    assert(index >= 0);
    assert(index <= m_length);

    return m_troops.at(index);
}

std::ostream& operator<<( std::ostream &out, const TroopsManager &list )
{
    auto it{ list.m_troops.cbegin() };

    while (it != list.m_troops.cend())
    {
        std::cout << it->second;
        ++it;
    }

    return out;
}
