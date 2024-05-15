/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:32:49 by slaye             #+#    #+#             */
/*   Updated: 2024/05/15 13:22:16 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"

Zombie::Zombie(std::string name) : name(name) {
	return ;
}

Zombie::~Zombie(void) {
	return ;
}

void	Zombie::announce(void) const {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}