/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:22:17 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 18:03:18 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Contact
{
	public:
		Contact();
		~Contact(void);
		bool	setup(void);
		string	get_fname(void);
		string	get_lname(void);
		string	get_nickname(void);
		string	get_number(void);
		string	get_secret(void);
		
	private:
		string	fname;
		string	lname;
		string	nickname;
		string	number;
		string	secret;
};