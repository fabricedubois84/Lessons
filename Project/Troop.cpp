#include "Troop.h"
#include <iostream>
#include <string>

// static member variables
int Troop::s_troops = 1;

// constructors
Troop::Troop(std::string name, Troop::Race race):
    m_name{name}, m_hp{100}
{
    m_id = s_troops++;

    switch (race)
    {
        case BARBARIAN:
            m_race = "Barbarian";
            m_strength = 2;
            m_weapon = Weapon{Weapon::KNIFE};
            break;
        case ARCHER:
            m_race = "Archer";
            m_strength = 1;
            m_weapon = Weapon{Weapon::BOW};
            break;
        case WIZZARD:
            m_race = "Wizzard";
            m_strength = 4;
            m_weapon = Weapon{Weapon::SWORD};
            break;
        case GIANT:
            m_race = "Giant";
            m_strength = 6;
            m_weapon = Weapon{Weapon::HAMMER};
            break;
    }
}

// destructor
Troop::~Troop()
{
    --s_troops;
std::cout << "Troop (" << m_id << ") " << m_name << " destroyed\n";
}

// operators



std::ostream& operator<<( std::ostream &out, const Troop &troop )
{
    out << "PROFILE TROOP ID " << troop.m_id << '\n';
    out << "- Name:\t\t" << troop.m_name << '\n';
    out << "- Race:\t\t" << troop.m_race << '\n';
    out << "- HP:\t\t" << troop.m_hp << '\n';
    out << "- Strength:\t" << troop.m_strength << '\n';
    out << troop.m_weapon << '\n';

    return out;
}

