/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:22:18 by slaye             #+#    #+#             */
/*   Updated: 2024/05/14 17:02:46 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"

std::string	prompt(std::string value)
{
	std::string	input;

	if (std::cin.eof())
		return (NULL);
	std::cout << value;
	getline(std::cin, input);
	return (input);
}

void	truncate(std::string value)
{
	for (int i = 0; i < 9; i++)
		std::cout << value[i];
	std::cout << ".";
}

void	add_mspaces(std::string value)
{
	std::cout << value;
	for (int i = 0; i < 10 - (int) value.length(); i++)
		std::cout << " ";
}