#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name; // DiamondTrap's name
	public:
		DiamondTrap(); // 1. Default Constructor
		DiamondTrap(std::string name); // EXTRA. Parametized Constructor
		DiamondTrap(const DiamondTrap &other); // 2. Copy Constructor
		DiamondTrap &operator=(const DiamondTrap &other); // 3. Copy Assignment Operator
		~DiamondTrap(); // 4. Destructor

		void attack(const std::string &target);
		void whoAmI();
		void getStatus() const;
};

#endif