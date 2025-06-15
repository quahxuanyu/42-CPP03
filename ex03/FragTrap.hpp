#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	protected:
		static const unsigned int defaultHitPoints = 100;
		static const unsigned int defaultEnergyPoints = 100;
		static const unsigned int defaultAttackDamage = 30;
    public:
        FragTrap(); // 1. Default Constructor
        FragTrap(std::string name); // EXTRA. Parametized Constuctor
        FragTrap(const FragTrap &other); // 2. Copy Constructor
        FragTrap &operator=(const FragTrap &other); // 3. Copy Assignment Operator
        ~FragTrap(); // 4. Destructor
        void highFiveGuys(void);
};
#endif