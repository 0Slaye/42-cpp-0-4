/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:22:17 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 17:46:07 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Contact
{
	public:
		Contact();
		~Contact(void);
		bool	setup(void);
		
	private:
		string	fname;
		string	lname;
		string	nickname;
		string	number;
		string	secret;
};