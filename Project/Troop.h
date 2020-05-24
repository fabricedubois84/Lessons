#ifndef TROOP_H
#define TROOP_H

#include "Weapon.h"
#include <iostream>
#include <string>

class Troop
{
public:
    enum Race
    {
        BARBARIAN,
        ARCHER,
        WIZZARD,
        GIANT

    };

private:
    int m_id{};
    std::string m_name{};
    int m_hp{};
    int m_strength{};
    std::string m_race{};
    Weapon m_weapon;

    static int s_troops;

public:
// constructors
    Troop() = delete;

    Troop(std::string name, Race race);

// destructors
    ~Troop();


// accessors
    int getId() { return static_cast<int>(m_id); }    

// member functions


// operators
    friend std::ostream& operator<<( std::ostream &out, const Troop &troop);

};

#endif // TROOP_H
