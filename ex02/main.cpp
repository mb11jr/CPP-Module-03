#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "--- 1. CONSTRUCTORS ---" << std::endl;
	FragTrap f("Fraggy");
	ScavTrap s("Scavvy");

	std::cout << "\n--- 2. FRAGTRAP TESTING ---" << std::endl;
	f.attack("a target"); // Use: ClapTrap's attack
	f.takeDamage(50);	  // Inherited logic
	f.beRepaired(20);	  // Inherited logic
	f.highFivesGuys();	  // Unique logic

	std::cout << "\n--- 3. SCAVTRAP TESTING ---" << std::endl;
	s.attack("the same target"); // Use: ScavTrap's special attack
	s.guardGate();				 // Unique logic

	std::cout << "\n--- 4. DESTRUCTORS ---" << std::endl;
	return 0;
}
