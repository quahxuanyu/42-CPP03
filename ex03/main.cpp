#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	alice("alice_diamond");

	alice.whoAmI();
	alice.getStatus();
	alice.attack("bob");
	return (0);
}