#include "ClapTrap.hpp"

void DisplayMessage(std::string message) {
	//(void) message;
	std::cout << message << std::endl;
}

ClapTrap::ClapTrap(): _name("deafult"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

}

ClapTrap::ClapTrap(const ClapTrap &other) {
    *this = other;
}

ClapTrap::~ClapTrap() {

}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string &target) {
    if (this->_energyPoints == 0)
        std::cout << "ClapTrap " << this->_name << " cannot attack " << target << " becuase it has 0 energy points!" << std::endl;
    else if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " cannot attack becuase it has 0 hit points!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints == 0 && amount != 0)
        std::cout << "ClapTrap " << this->_name << " cannot take damage becuase it has 0 hit points!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!" << std::endl;
        if (amount > this->_hitPoints)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints == 0)
        std::cout << "ClapTrap " << this->_name << " cannot repair becuase it has 0 energy points!" << std::endl;
    else if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " cannot repair becuase it has 0 hit points!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " repairs " << amount << " points of damage!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
}