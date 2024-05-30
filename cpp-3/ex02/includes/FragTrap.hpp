/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:08:09 by slaye             #+#    #+#             */
/*   Updated: 2024/05/30 16:14:02 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void); // canonical
		FragTrap(std::string name);
		FragTrap(FragTrap const &ref); // canonical
		~FragTrap(void); // canonical

		FragTrap	&operator=(FragTrap const &ref); // canonical

		void		highFivesGuys(void) const;
};

#endif
