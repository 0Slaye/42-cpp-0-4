/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:05:30 by slaye             #+#    #+#             */
/*   Updated: 2024/05/15 16:46:04 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].set_name(name);
	return (zombies);
}