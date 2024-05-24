/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:48:24 by slaye             #+#    #+#             */
/*   Updated: 2024/05/24 15:17:53 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap a("Robot1");
	ClapTrap b("Robot2");
	int		holder;

	holder = a.get_energy();
	for (int i = 0; i < holder; i++)
		a.attack(b.get_name());
	std::cout << a.get_name() << " has no more energy!" << std::endl;
	a.attack(b.get_name());
	a.beRepaired(10);
	a.takeDamage(10);
	return (0);
}