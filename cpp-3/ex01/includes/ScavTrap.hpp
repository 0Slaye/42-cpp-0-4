/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:20:23 by slaye             #+#    #+#             */
/*   Updated: 2024/05/24 15:21:07 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
	public:
		ScavTrap(void); // canonical
		ScavTrap(ScavTrap const &ref); // canonical
		~ScavTrap(void); // canonical

		ScavTrap	&operator=(ScavTrap const &ref); // canonical
};

#endif
