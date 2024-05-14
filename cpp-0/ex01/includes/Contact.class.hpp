/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:22:17 by slaye             #+#    #+#             */
/*   Updated: 2024/05/14 17:04:50 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Contact
{
	public:
		Contact();
		~Contact(void);
		int		setup(void);
		void	print(void);
		std::string	get_fname(void);
		std::string	get_lname(void);
		std::string	get_nickname(void);
		std::string	get_number(void);
		std::string	get_secret(void);
		
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickname;
		std::string	number;
		std::string	secret;
};