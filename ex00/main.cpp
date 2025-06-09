#include "ClapTrap.hpp"

int main(void) {
    ClapTrap A("A");
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
    A.takeDamage(60);
}