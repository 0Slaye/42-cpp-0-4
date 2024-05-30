/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:49:36 by slaye             #+#    #+#             */
/*   Updated: 2024/05/30 15:37:35 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap(void); // canonical
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &ref); // canonical
		~ClapTrap(void); // canonical

		ClapTrap	&operator=(ClapTrap const &ref); // canonical

		std::string	get_name(void) const;
		int			get_hit_points(void) const;
		int			get_energy_points(void) const;
		int			get_attack_damage(void) const;

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string				_name;
		unsigned int			_hit_points;
		unsigned int			_energy_points;
		unsigned int			_attack_damage;
};

#endif
