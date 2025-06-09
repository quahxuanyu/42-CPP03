#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("default_Fragtrap") {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap parameterized constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "FragTrap copy constructor called for " << this->_name << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap copy assignment operator called for " << this->_name << std::endl;
    return *this;
}

void FragTrap::highFiveGuys(void) {
    if (this->_hitPoints == 0)
        std::cout << "FragTrap " << this->_name << " cannot high five because it has 0 hit points!" << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " is requesting a high five!" << std::endl;
}