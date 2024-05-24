/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:49:36 by slaye             #+#    #+#             */
/*   Updated: 2024/05/24 15:12:48 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name); // canonical
		ClapTrap(ClapTrap const &ref); // canonical
		~ClapTrap(void); // canonical

		ClapTrap	&operator=(ClapTrap const &ref); // canonical

		std::string	get_name(void) const;
		int			get_health(void) const;
		int			get_energy(void) const;
		int			get_attack(void) const;

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack;
};

#endif
