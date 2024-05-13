/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:22:18 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 18:21:13 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"

string	prompt(string value)
{
	string	input;

	cout << value;
	getline(cin, input);
	return (input);
}

void	truncate(string value)
{
	for (int i = 0; i < 9; i++)
		cout << value[i];
	cout << ".";
}

void	add_mspaces(string value)
{
	cout << value;
	for (int i = 0; i < 10 - (int) value.length(); i++)
		cout << " ";
}