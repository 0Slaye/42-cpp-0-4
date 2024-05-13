/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:53:25 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 17:51:02 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"
#include "PhoneBook.class.hpp"

void	add_handler(PhoneBook *phonebook)
{
	Contact	contact;

	if (contact.setup() == false)
		return ;
	phonebook->get_size();
	phonebook->contacts[phonebook->get_size()] = contact;
	phonebook->set_size(phonebook->get_size() + 1);
}

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contacts[8];
	string		input;

	phonebook.contacts = contacts;
	phonebook.set_size(0);
	while (true)
	{
		input = prompt("phonebook$ ");
		if (input.compare("ADD") == 0)
			add_handler(&phonebook);
		else if (input.compare("SEARCH") == 0)
			break ;
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
