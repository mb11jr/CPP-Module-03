#include "ClapTrap.hpp"

int main()
{
	std::cout << "--- 1. Initializing ---" << std::endl;
	ClapTrap a("Alpha");
	ClapTrap b("Beta");

	std::cout << "\n--- 2. Basic Combat ---" << std::endl;
	a.attack("Beta");
	b.takeDamage(0);

	b.attack("Alpha");
	a.takeDamage(4);

	std::cout << "\n--- 3. Repair & Energy ---" << std::endl;
	a.beRepaired(2);
	a.beRepaired(1);

	std::cout << "\n--- 4. Death Case ---" << std::endl;
	b.takeDamage(15);
	b.attack("Alpha");
	b.beRepaired(5);

	std::cout << "\n--- 5. Cloning test ---" << std::endl;
	ClapTrap c(a);
	c.attack("the target");

	std::cout << "\n--- 6. Cleanup ---" << std::endl;
	return 0;
}
