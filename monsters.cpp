#include <array>
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
#include <iostream>
#include <string>
 
class Monster
{
public:
	enum Type
	{
		DRAGON,
		GOBLIN,
		OGRE,
		ORC,
		SKELETON,
		TROLL,
		VAMPIRE,
		ZOMBIE,
		MAX_MONSTER_TYPES
	};
 
private:
 
	Type m_type{};
	std::string m_name{};
	std::string m_roar{};
	int m_hitPoints{};
 
public:
	Monster(Type type, const std::string& name, const std::string& roar, int hitPoints)
		: m_type{ type }, m_name{ name }, m_roar{ roar }, m_hitPoints{ hitPoints }
	{
 
	}
 
	std::string getTypeString() const
	{
		switch (m_type)
		{
		case DRAGON: return "dragon";
		case GOBLIN: return "goblin";
		case OGRE: return "ogre";
		case ORC: return "orc";
		case SKELETON: return "skeleton";
		case TROLL: return "troll";
		case VAMPIRE: return "vampire";
		case ZOMBIE: return "zombie";
		default: return "???";
		}
	}
 
	void print() const
	{
		std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << '\n';
	}
};
 
class MonsterGenerator
{
public:
	// Generate a random number between min and max (inclusive)
	// Assumes std::srand() has already been called
	// Assumes max - min <= RAND_MAX
	static int getRandomNumber(int min, int max)
	{
		static constexpr double fraction { 1.0 / (RAND_MAX + 1.0) };  // static used for efficiency, so we only calculate this value once
		// evenly distribute the random number across our range
		return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
	}
 
	static Monster generateMonster()
	{
		Monster::Type type{static_cast<Monster::Type>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1)) };
		int hitPoints{ getRandomNumber(1, 100) };
 
		// If your compile is not C++17 capable, use std::array<std::string_view, 6> instead.
		static constexpr std::array<const char*, 6> s_names{ "Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans" };
		static constexpr std::array<const char*, 6> s_roars{ "*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*"};
 
		// Without the cast, compilers with a high warning level complain about
		// an implicit cast from a signed to an unsigned integer.
		std::string name{ s_names[static_cast<std::size_t>(getRandomNumber(0, s_names.size()-1))] };
		std::string roar{ s_roars[static_cast<std::size_t>(getRandomNumber(0, s_roars.size()-1))] };
 
		return {type, name, roar, hitPoints};
	}
};
 
int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock
	std::rand(); // If using Visual Studio, discard first random value
 
	Monster m{ MonsterGenerator::generateMonster() };
	m.print();
 
	return 0;
}

/*
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <array>

class Monster
{
public:
    enum Type
    {
        DRAGON,
        GOBLIN,
        OGRE,
        ORC,
        SKELETON,
        TROLL,
        VAMPIRE,
        ZOMBIE,
        MAX_MONSTER_TYPES

    };

    Monster(Type type, const std::string &name, const std::string &roar, int hitPoints)
        : m_type{type}, m_name{name}, m_roar{roar}, m_hitPoints{hitPoints}
    {
    }

    void print() const
    {
        std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says "
            << m_roar << "\n";
    }

    std::string getTypeString() const
    {
        switch (m_type)
        {
            case DRAGON: return "Dragon"; break;
            case GOBLIN: return "Goblin"; break;
            case OGRE: return "Ogre"; break;
            case ORC: return "Orc"; break;
            case SKELETON: return "Skeleton"; break;
            case TROLL: return "Troll"; break;
            case VAMPIRE: return "Vampire"; break;
            case ZOMBIE: return "Zombie"; break;
            default: return "???";
        }
    }


private:
    Type m_type{};
    std::string m_name{};
    std::string m_roar{};
    int m_hitPoints{};

};

class MonsterGenerator
{
public:
    static Monster generateMonster()
    {
        std::array<std::string, 6> s_names{"Joe", "Jack", "Robert", "Michael", "Stacey", "Dave"};
        std::array<std::string, 6> s_roars{"*beep*", "*squeek*", "*sniff*", "*bark*", "*roar*", "*rattle*"};

        return Monster(Monster::Type(getRandomNumber(0, (Monster::MAX_MONSTER_TYPES - 1) )),
            s_names[getRandomNumber(0, 5)],
            s_roars[getRandomNumber(0, 5)],
            getRandomNumber(0, 100)
            );

    }

    // Generate a random number between min and max (inclusive)
	// Assumes srand() has already been called
	static int getRandomNumber(int min, int max)
	{
		static constexpr double fraction{ 1.0 / (static_cast<double>(RAND_MAX) + 1.0) };  // static used for efficiency, so we only calculate this value once
		// evenly distribute the random number across our range
		return static_cast<int>(std::rand() * fraction * (max - min + 1) + min);
	}

};


int main(int argc, char* argv[])
{
	std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock
	std::rand(); // If using Visual Studio, discard first random value

	Monster m{ MonsterGenerator::generateMonster() };
	m.print();

    return 0;
}

*/