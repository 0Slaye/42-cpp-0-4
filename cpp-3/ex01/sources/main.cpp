/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:48:24 by slaye             #+#    #+#             */
/*   Updated: 2024/05/29 16:54:09 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap a;
	ClapTrap b("Robot 2");
	int		holder;

	holder = a.get_energy_points();
	for (int i = 0; i < holder; i++)
		a.attack(b.get_name());
	std::cout << a.get_name() << " has no more energy!" << std::endl;
	a.attack(b.get_name());
	a.beRepaired(10);
	a.takeDamage(101);
	std::cout << a.get_hit_points() << std::endl;
	return (0);
}