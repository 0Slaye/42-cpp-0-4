/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:53:25 by slaye             #+#    #+#             */
/*   Updated: 2024/05/14 17:08:00 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"
#include "PhoneBook.class.hpp"

bool	add_handler(PhoneBook *phonebook, int *offset)
{
	Contact	contact;
	int		result;

	result = contact.setup();
	if (result == 1)
		return (false);
	else if (result == 2)
		return (true);
	if (phonebook->get_size() == 8)
	{
		phonebook->contacts[(*offset) % 8] = contact;
		*offset += 1;
	}
	else
	{
		phonebook->contacts[phonebook->get_size()] = contact;
		phonebook->set_size(phonebook->get_size() + 1);
	}
	return (true);
}

bool	search_handler(PhoneBook *phonebook)
{
	std::string	input;
	int			value;

	if (phonebook->get_size() == 0)
		return (true);
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	for (int i = 0; i < phonebook->get_size(); i++)
	{
		std::cout << "|" << i << "         ";
		std::cout << "|";
		if (((phonebook->contacts[i]).get_fname()).length() > 10)
			truncate((phonebook->contacts[i]).get_fname());
		else
			add_mspaces((phonebook->contacts[i]).get_fname());
		std::cout << "|";
		if (((phonebook->contacts[i]).get_lname()).length() > 10)
			truncate((phonebook->contacts[i]).get_lname());
		else
			add_mspaces((phonebook->contacts[i]).get_lname());
		std::cout << "|";
		if (((phonebook->contacts[i]).get_nickname()).length() > 10)
			truncate((phonebook->contacts[i]).get_nickname());
		else
			add_mspaces((phonebook->contacts[i]).get_nickname());
		std::cout << "|" << std::endl;
	}
	input = prompt("Select an index: ");
	if (std::cin.eof())
		return ((void) (std::cout << std::endl << ERR_FORMAT << std::endl), false);
	if (input.length() != 1)
		return ((void) (std::cout << ERR_FORMAT << std::endl), true);
	else if (!(input[0] >= 48 && input[0] <= 57))
		return ((void) (std::cout << ERR_FORMAT << std::endl), true);
	std::istringstream(input) >> value;
	if (value >= phonebook->get_size())
		return ((void) (std::cout << ERR_INDEX << std::endl), true);
	phonebook->contacts[value].print();
	return (true);
}

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contacts[8];
	std::string		input;
	int				offset;

	phonebook.contacts = contacts;
	phonebook.set_size(0);
	offset = 0;
	while (true)
	{
		input = prompt("phonebook$ ");
		if (std::cin.eof())
			return (std::cout << std::endl, 0);
		if (input.compare("ADD") == 0 && add_handler(&phonebook, &offset) == false)
			break ;
		else if (input.compare("SEARCH") == 0 && search_handler(&phonebook) == false)
			break ;
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
