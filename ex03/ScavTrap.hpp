#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	protected:
		static const unsigned int defaultHitPoints = 100;
		static const unsigned int defaultEnergyPoints = 50;
		static const unsigned int defaultAttackDamage = 20;
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