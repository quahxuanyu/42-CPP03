#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        ClapTrap(); // 1. Default Constructor
        ClapTrap(std::string name); // EXTRA. Parametized Constuctor
        ClapTrap(const ClapTrap &other); // 2. Copy Constructor
        ClapTrap &operator=(const ClapTrap &other); // 3. Copy Assignment Operator
        ~ClapTrap(); // 4. Destructor
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif