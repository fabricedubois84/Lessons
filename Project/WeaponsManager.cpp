#include "WeaponsManager.h"
#include <cassert>

// member functions
void WeaponsManager::add(Weapon &weapon)
{
    m_weapons.push_back(weapon);
    ++m_length;

}

void WeaponsManager::remove(const int index)
{
    m_weapons.erase(m_weapons.begin() + index);
    --m_length;
}

int WeaponsManager::size() const
{
    return m_length;
}


// operators
Weapon& WeaponsManager::operator[](const int index)
{
    assert(index >= 0);
    assert(index < m_length);

    return m_weapons[index];
}
