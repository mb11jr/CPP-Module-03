#include "ScavTrap.hpp"

int main()
{
	std::cout << "--- Creating Scav ---" << std::endl;
	ScavTrap s("Scavvy");

	std::cout << "\n--- Testing ---" << std::endl;
	s.attack("Agent01");	// Use: ScavTrap's attack
	s.beRepaired(10);		// Use: ClapTrap's repair
	s.guardGate();			// Use: ScavTrap's special

	std::cout << "\n--- Deleting Scav ---" << std::endl;
	return 0;
}
