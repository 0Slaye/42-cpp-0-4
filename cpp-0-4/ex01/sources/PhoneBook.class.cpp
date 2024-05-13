/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:58:27 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 17:20:41 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	cout << "╭───────────────────────────────╮" << endl;
	cout << "│         [+] Phonebook         │" << endl;
	cout << "╰───────────────────────────────╯" << endl;
	cout << endl;
}

PhoneBook::~PhoneBook(void)
{
	cout << endl;
	cout << "╭───────────────────────────────╮" << endl;
	cout << "│         [-] Phonebook         │" << endl;
	cout << "╰───────────────────────────────╯" << endl;
}

void	PhoneBook::set_size(int value)
{
	this->size = value;
}

int	PhoneBook::get_size(void)
{
	return (this->size);
}