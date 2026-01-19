#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
	std::cout << "FragTrap [Default] is ready!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
	std::cout << "FragTrap [" << _name << "] is ready!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap Assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap [" << _name << "] destroyed. No more high fives..." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap [" << _name << "] requests a high five! 🖐️" << std::endl;
}
