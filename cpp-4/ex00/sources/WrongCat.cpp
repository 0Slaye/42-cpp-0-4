/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:50:41 by uwywijas          #+#    #+#             */
/*   Updated: 2024/05/31 18:37:42 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	std::cout << "WrongCat default constructor called." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &ref) : WrongAnimal(ref) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = ref;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat default destructor called." << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &ref) {
	std::cout << "WrongCat equal operator called." << std::endl;
	this->_type = ref._type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Miaou." << std::endl;
}