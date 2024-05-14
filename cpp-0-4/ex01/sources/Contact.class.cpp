/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:58:27 by slaye             #+#    #+#             */
/*   Updated: 2024/05/14 17:12:47 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.hpp"
#include "Contact.class.hpp"

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{

}

int	Contact::setup(void)
{
	std::string	input;

	input = prompt("First name: ");
	if (std::cin.eof())
		return (std::cout << std::endl << OPE_CANCELED << std::endl, 1);
	if (input.compare("") == 0)
		return (std::cout << OPE_CANCELED << std::endl, 2);
	this->fname = input;
	input = prompt("Last name: ");
	if (std::cin.eof())
		return (std::cout << std::endl << OPE_CANCELED << std::endl, 1);
	if (input.compare("") == 0)
		return (std::cout << OPE_CANCELED << std::endl, 2);
	this->lname = input;
	input = prompt("Nickname: ");
	if (std::cin.eof())
		return (std::cout << std::endl << OPE_CANCELED << std::endl, 1);
	if (input.compare("") == 0)
		return (std::cout << OPE_CANCELED << std::endl, 2);
	this->nickname = input;
	input = prompt("Phone number: ");
	if (std::cin.eof())
		return (std::cout << std::endl << OPE_CANCELED << std::endl, 1);
	if (input.compare("") == 0)
		return (std::cout << OPE_CANCELED << std::endl, 2);
	this->number = input;
	input = prompt("Darkest secret: ");
	if (std::cin.eof())
		return (std::cout << std::endl << OPE_CANCELED << std::endl, 1);
	if (input.compare("") == 0)
		return (std::cout << OPE_CANCELED << std::endl, 2);
	this->secret = input;
	return (0);
}

void Contact::print(void)
{
	std::cout << "First name: " << this->fname << std::endl;
	std::cout << "Last name: " << this->lname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->number << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}

std::string Contact::get_fname(void)
{
	return (this->fname);
}

std::string Contact::get_lname(void)
{
	return (this->lname);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_number(void)
{
	return (this->number);
}

std::string Contact::get_secret(void)
{
	return (this->secret);
}