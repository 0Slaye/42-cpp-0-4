/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:48:24 by slaye             #+#    #+#             */
/*   Updated: 2024/05/30 16:15:59 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	int	holder;

	{
		FragTrap a;
		holder = a.get_energy_points() + 10;
		std::cout << a.get_energy_points() << std::endl;
		while (holder--)
			a.attack("TEST");
		a.highFivesGuys();
		std::cout << a.get_attack_damage() << std::endl;
		std::cout << a.get_energy_points() << std::endl;
		std::cout << a.get_hit_points() << std::endl;
		std::cout << a.get_name() << std::endl;
	}
	std::cout << std::endl;
	{
		FragTrap b("Robot");
		holder = b.get_energy_points() + 10;
		std::cout << b.get_energy_points() << std::endl;
		while (holder--)
			b.attack("TEST");
		b.highFivesGuys();
		std::cout << b.get_attack_damage() << std::endl;
		std::cout << b.get_energy_points() << std::endl;
		std::cout << b.get_hit_points() << std::endl;
		std::cout << b.get_name() << std::endl;
	}
	return (0);
}