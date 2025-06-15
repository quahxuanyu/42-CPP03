#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name"), ScavTrap(), FragTrap(), _name("DiamondTrap")
{
	this->_hitPoints = FragTrap::defaultHitPoints; // 100
	this->_energyPoints = ScavTrap::defaultEnergyPoints; // 50
	this->_attackDamage = FragTrap::defaultAttackDamage; // 30
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->_hitPoints = FragTrap::defaultHitPoints; // 100
	this->_energyPoints = ScavTrap::defaultEnergyPoints; // 50
	this->_attackDamage = FragTrap::defaultAttackDamage; // 30
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap copy constructor called for " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "DiamondTrap copy assignment operator called for " << this->_name << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
 std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target); //can only be called in the fucntion body
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::getStatus() const
{
	std::cout << "NAME: " << this->_name << std::endl;
	std::cout << "HP  : " << this->_hitPoints << std::endl;
	std::cout << "EP  : " << this->_energyPoints << std::endl;
	std::cout << "DMG : " << this->_attackDamage << std::endl;
}