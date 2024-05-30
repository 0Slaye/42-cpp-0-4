/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:18:42 by slaye             #+#    #+#             */
/*   Updated: 2024/05/30 16:19:14 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#define FRAGTRAP_HITPOINT 100
#define FRAGTRAP_ENERGYPOINT 100
#define FRAGTRAP_ATTACKDAMAGE 30

FragTrap::FragTrap(void) : ClapTrap() {
	this->_hit_points = FRAGTRAP_HITPOINT;
	this->_energy_points = FRAGTRAP_ENERGYPOINT;
	this->_attack_damage = FRAGTRAP_ATTACKDAMAGE;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hit_points = FRAGTRAP_HITPOINT;
	this->_energy_points = FRAGTRAP_ENERGYPOINT;
	this->_attack_damage = FRAGTRAP_ATTACKDAMAGE;
	std::cout << "Name FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ref) : ClapTrap(ref) {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = ref;
}

FragTrap::~FragTrap() {
	std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &ref) {
	this->_name = ref.get_name();
	this->_hit_points = ref.get_hit_points();
	this->_energy_points = ref.get_energy_points();
	this->_attack_damage = ref.get_attack_damage();
	return (*this);
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << "FragTrap " << this->_name << " wants to high five." << std::endl;
}