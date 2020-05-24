#include "Weapon.h"
#include <string>
#include <iostream>

// constructors
Weapon::Weapon()
{
std::cout << "Weapon default created\n";
}

Weapon::Weapon(Name name)
{
    switch (name)
    {
        case KNIFE:
            m_name = "Knife";
            m_damage = 2;
            break;
        case SWORD:
            m_name = "Sword";
            m_damage = 4;
            break;
        case AXE:
            m_name = "Axe";
            m_damage = 5;
            break;
        case BOW:
            m_name = "Bow";
            m_damage = 3;
            break;
        case CROSSBOW:
            m_name = "Cross Bow";
            m_damage = 4;
            break;
        case HAMMER:
            m_name = "Hammer";
            m_damage = 5;
            break;
    }
std::cout << "Weapon " << m_name << " created via enum list allocation.\n";
}

// desctructor
Weapon::~Weapon()
{
std::cout << "Weapon " << m_name << " destroyed.\n";
}

// operators

std::ostream& operator<<( std::ostream &out, const Weapon &weapon )
{
    out << "WEAPON\n";
    out << "- Name:\t\t" << weapon.m_name << '\n';
    out << "- Damage:\t" << weapon.m_damage << '\n';
    out << "- Description:\t" << weapon.m_description << '\n';

    return out;
}
