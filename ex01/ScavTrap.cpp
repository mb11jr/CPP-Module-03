#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
	std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_HP == 0 || _EP == 0) {
		std::cout << "ScavTrap " << _name << " can't move!" << std::endl;
		return;
	}
	_EP--;
	std::cout << "ScavTrap " << _name << " brutally attacks " << target
			<< ", dealing " << _AD << " damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode." << std::endl;
}
