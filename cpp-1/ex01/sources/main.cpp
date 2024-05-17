/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:59:45 by slaye             #+#    #+#             */
/*   Updated: 2024/05/15 16:47:22 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"

int	main(void) {
	Zombie	*zombies;

	zombies = zombieHorde(10, "Test");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}