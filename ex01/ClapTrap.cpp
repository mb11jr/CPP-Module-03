#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_HP = other._HP;
		this->_EP = other._EP;
		this->_AD = other._AD;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_HP == 0 || _EP == 0)
	{
		std::cout << "ClapTrap " << _name << " is unable to attack!" << std::endl;
		return;
	}
	_EP--;
	std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _AD << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	if (amount >= _HP)
		_HP = 0;
	else
		_HP -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount
			<< " points of damage! HP left: " << _HP << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HP == 0 || _EP == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot be repaired!" << std::endl;
		return;
	}
	_EP--;
	_HP += amount;
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount
			<< " points! HP left: " << _HP << std::endl;
}
