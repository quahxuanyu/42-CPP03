#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap(); // 1. Default Constructor
        ScavTrap(std::string name); // EXTRA. Parametized Constuctor
        ScavTrap(const ScavTrap &other); // 2. Copy Constructor
        ScavTrap &operator=(const ScavTrap &other); // 3. Copy Assignment Operator
        ~ScavTrap(); // 4. Destructor
        void attack(const std::string &target);
        void guardGate();
};

#endif