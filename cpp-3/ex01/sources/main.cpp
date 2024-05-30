/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:48:24 by slaye             #+#    #+#             */
/*   Updated: 2024/05/30 16:03:58 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	int	holder;

	{
		ScavTrap a;
		holder = a.get_energy_points() + 10;
		std::cout << a.get_energy_points() << std::endl;
		while (holder--)
			a.attack("TEST");
		a.guardGate();
		std::cout << a.get_attack_damage() << std::endl;
		std::cout << a.get_energy_points() << std::endl;
		std::cout << a.get_hit_points() << std::endl;
		std::cout << a.get_name() << std::endl;
	}
	std::cout << std::endl;
	{
		ScavTrap b("Robot");
		holder = b.get_energy_points() + 10;
		std::cout << b.get_energy_points() << std::endl;
		while (holder--)
			b.attack("TEST");
		b.guardGate();
		std::cout << b.get_attack_damage() << std::endl;
		std::cout << b.get_energy_points() << std::endl;
		std::cout << b.get_hit_points() << std::endl;
		std::cout << b.get_name() << std::endl;
	}
	return (0);
}