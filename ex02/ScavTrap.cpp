#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default_scavtrap") {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "ScavTrap copy constructor called for " << this->_name << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << "ScavTrap copy assignment operator called for " << this->_name << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if (this->_energyPoints == 0)
        std::cout << "ScavTrap " << this->_name << " cannot attack " << target << " because it has 0 energy points!" << std::endl;
    else if (this->_hitPoints == 0)
        std::cout << "ScavTrap " << this->_name << " cannot attack because it has 0 hit points!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

void ScavTrap::guardGate() {
    if (this->_hitPoints == 0)
        std::cout << "ScavTrap " << this->_name << " cannot guard gate because it has 0 hit points!" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode!" << std::endl;
}