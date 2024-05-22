/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:02:20 by slaye             #+#    #+#             */
/*   Updated: 2024/05/22 19:23:49 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

#include <bitset>

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &ref) {
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << this->shift);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << this->shift));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &ref) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = ref.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &ref) {
	if (this->toFloat() > ref.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &ref) {
	if (this->toFloat() >= ref.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &ref) {
	if (this->toFloat() < ref.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &ref) {
	if (this->toFloat() < ref.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &ref) {
	if (this->toFloat() == ref.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &ref) {
	if (this->toFloat() != ref.toFloat())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &ref) {
	return (Fixed(this->toFloat() + ref.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &ref) {
	return (Fixed(this->toFloat() - ref.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &ref) {
	return (Fixed(this->toFloat() * ref.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &ref) {
	return (Fixed(this->toFloat() / ref.toFloat()));
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

int	Fixed::getRawBits(void) const {
	return (this->value);
}

int	Fixed::toInt(void) const {
	return(this->value >> this->shift);
}

float	Fixed::toFloat(void) const {
	return(((float) this->value / (float) (1 << this->shift)));
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &fixed) {
	stream << fixed.toFloat();
	return (stream);
}
