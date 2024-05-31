/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:16:48 by slaye             #+#    #+#             */
/*   Updated: 2024/05/31 14:48:29 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void); // canonical
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &ref); // canonical
		~ScavTrap(void); // canonical

		ScavTrap	&operator=(ScavTrap const &ref); // canonical

		void		attack(const std::string &target);
		void		guardGate(void) const;
};

#endif
