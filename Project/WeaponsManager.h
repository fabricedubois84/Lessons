#ifndef WEAPONSMANAGER_H
#define WEAPONSMANAGER_H

#include "Weapon.h"
#include <vector>
#include <functional>

class WeaponsManager
{
private:
    std::vector<std::reference_wrapper<Weapon>> m_weapons;
    int m_length{};

public:
// constructors
    WeaponsManager() { m_length = m_weapons.size(); }
    WeaponsManager(const WeaponsManager&) = delete;

// member functions
    void add(Weapon &weapon);
    void remove(const int index);
    int size() const;

// operators
    Weapon& operator[] (const int index);
};

#endif // WEAPONSMANAGER_H
