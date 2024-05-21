/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:59:31 by slaye             #+#    #+#             */
/*   Updated: 2024/05/21 13:03:34 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	public:
		Fixed(void); // canonical
		Fixed(Fixed const &ref); // canonical
		~Fixed(void); // canonical

		Fixed	&operator=(Fixed const &ref); // canonical
};

#endif
