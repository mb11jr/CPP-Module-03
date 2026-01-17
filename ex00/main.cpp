#include "ClapTrap.hpp"

int main()
{
	std::cout << "--- 1. Initializing ---" << std::endl;
	ClapTrap a("Alpha");
	ClapTrap b("Beta");

	std::cout << "\n--- 2. Basic Combat ---" << std::endl;
	a.attack("Beta");
	b.takeDamage(0); // Testing 0 damage input

	b.attack("Alpha");
	a.takeDamage(4); // Alpha HP: 10 -> 6

	std::cout << "\n--- 3. Repair & Energy ---" << std::endl;
	a.beRepaired(2); // Alpha HP: 6 -> 8 | Energy: 10 -> 9
	a.beRepaired(1); // Alpha HP: 8 -> 9 | Energy: 9 -> 8

	std::cout << "\n--- 4. The Edge Case (Death) ---" << std::endl;
	b.takeDamage(15);  // HP = 0 -> dead
	b.attack("Alpha"); // HP = 0 -> unable to attack
	b.beRepaired(5);   // HP = 0 -> cannot be repaired

	std::cout << "\n--- 5. Cloning test ---" << std::endl;
	ClapTrap c(a);			// Copy Constructor: 'c' is a clone of 'a'
	c.attack("the target"); // 'c' should have 8 energy left like 'a'
	std::cout << "\n--- 6. Cleanup ---" << std::endl;
	return 0;
}

// #include "ClapTrap.hpp"

// int main()
// {
// 	std::cout << "\n--- 3. TESTING COPY CONSTRUCTOR ---" << std::endl;
// 	// We create 'c' as a copy of 'a' AFTER 'a' has already attacked.
// 	// 'c' should have 9 EP, not the default 10.
// 	ClapTrap c(a);
// 	c.attack("a training dummy");

// 	std::cout << "\n--- 4. TESTING ASSIGNMENT OPERATOR ---" << std::endl;
// 	ClapTrap d("Delta");
// 	// We overwrite 'd' with 'b's data.
// 	// 'd' should now have 5 HP left (because 'b' was hit earlier).
// 	d = b;
// 	d.beRepaired(2);

// 	std::cout << "\n--- 5. EDGE CASE: EXHAUSTION ---" << std::endl;
// 	// We drain the rest of 'a's energy (he has 9 left)
// 	for (int i = 0; i < 9; i++)
// 		a.attack("the air");

// 	// This 10th attack should fail
// 	a.attack("Beta");

// 	std::cout << "\n--- 6. CLEANUP ---" << std::endl;
// 	// Watch the destructors trigger in reverse order: d, c, b, a
// 	return 0;
// }
