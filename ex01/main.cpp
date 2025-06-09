#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap A("A");
    ClapTrap B("B");

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
}