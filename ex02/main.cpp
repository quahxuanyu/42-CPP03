#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ScavTrap A("A");
    ClapTrap B("B");
    FragTrap C("C");

    A.attack("B");
    A.attack("B");
    A.attack("B");
    A.attack("B");
    A.attack("B");
    A.attack("B");
    A.attack("B");
    A.attack("B");
    A.attack("B");
    A.attack("B");
    A.attack("B");
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    B.beRepaired(100);
    A.takeDamage(60);
    A.guardGate();
    A.takeDamage(60);
    A.guardGate();
    C.takeDamage(50);
    C.highFiveGuys();
    C.attack("B");
    C.beRepaired(30);
    C.attack("A");
    C.highFiveGuys();
    C.takeDamage(100);
    C.highFiveGuys();
}