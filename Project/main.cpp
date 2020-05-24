#include "Troop.h"
#include "Weapon.h"
#include "TroopsManager.h"
#include "WeaponsManager.h"
#include <iostream>
#include <functional>


void introduction()
{
    std::cout << "Project: mini characters management\n";
    std::cout << "Developer: Fabrice\n";
    std::cout << "Status: development\n";
    std::cout << '\n';
}

int main (int argc, char *argv[])
{
    TroopsManager troops;

    introduction();

    Troop player{"Claire", Troop::ARCHER};
    troops.add(player);
    Troop fabrice{"fabrice", Troop::WIZZARD};
    troops.add(fabrice);

    Troop john{"John", Troop::GIANT};
    troops.add(john);
    Troop hommer{"Hommer", Troop::GIANT};
    troops.add(hommer);
    Troop chad{"Chad", Troop::BARBARIAN};
    troops.add(chad);
    Troop booboo{"Booboo", Troop::WIZZARD};
    troops.add(booboo);
    Troop wizzi{"Wizzi", Troop::WIZZARD};
    troops.add(wizzi);

//    std::cout << troops[hommer.getId()] << '\n';

    std::cout << troops << '\n';

    return 0;
}
