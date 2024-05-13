/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:58:27 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 17:46:09 by slaye            ###   ########.fr       */
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