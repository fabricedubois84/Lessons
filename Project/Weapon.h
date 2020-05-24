#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
public:
    enum Name
    {
        KNIFE,
        SWORD,
        AXE,
        BOW,
        CROSSBOW,
        HAMMER,
    };

private:
    std::string m_name{};
    int m_damage{};
    std::string m_description{};

public:
// constructors
    Weapon();
    Weapon( Name name );

// destructors
    ~Weapon();

// accessors


// member functions


// operators
    friend std::ostream& operator<<( std::ostream &out, const Weapon &weapon );
};

#endif // WEAPON_H
