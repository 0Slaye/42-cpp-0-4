/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:58:27 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 18:03:55 by slaye            ###   ########.fr       */
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

bool	Contact::setup(void)
{
	string	input;

	input = prompt("First name: ");
	if (input.compare("") == 0)
		return (cout << OPE_CANCELED << endl, false);
	this->fname = input;
	input = prompt("Last name: ");
	if (input.compare("") == 0)
		return (cout << OPE_CANCELED << endl, false);
	this->lname = input;
	input = prompt("Nickname: ");
	if (input.compare("") == 0)
		return (cout << OPE_CANCELED << endl, false);
	this->nickname = input;
	input = prompt("Phone number: ");
	if (input.compare("") == 0)
		return (cout << OPE_CANCELED << endl, false);
	this->number = input;
	input = prompt("Darkest secret: ");
	if (input.compare("") == 0)
		return (cout << OPE_CANCELED << endl, false);
	this->secret = input;
	return (true);
}

string Contact::get_fname(void)
{
	return (this->fname);
}

string Contact::get_lname(void)
{
	return (this->lname);
}

string Contact::get_nickname(void)
{
	return (this->nickname);
}

string Contact::get_number(void)
{
	return (this->number);
}

string Contact::get_secret(void)
{
	return (this->secret);
}