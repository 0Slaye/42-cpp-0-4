/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:52:44 by slaye             #+#    #+#             */
/*   Updated: 2024/05/24 15:16:29 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attack(0) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ref) {
	std::cout << "Copie ClapTrap constructor called" << std::endl;
	*this = ref;
}

ClapTrap::~ClapTrap() {
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &ref) {
	this->_name = ref.get_name();
	this->_health = ref.get_health();
	this->_energy = ref.get_energy();
	this->_attack = ref.get_attack();
	return (*this);
}

std::string	ClapTrap::get_name(void) const {
	return (this->_name);
}

int	ClapTrap::get_health(void) const {
	return (this->_health);
}

int	ClapTrap::get_energy(void) const {
	return (this->_energy);
}

int	ClapTrap::get_attack(void) const {
	return (this->_attack);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energy <= 0)
		return ;
	this->_energy -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->_health -= amount;
	std::cout << "ClapTrap " << this->_name << " has been damaged by " << amount << " points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy <= 0)
		return ;
	this->_energy -= 1;
	this->_health += amount;
	std::cout << "ClapTrap " << this->_name << " repaired himself of " << amount << " points!" << std::endl;
}