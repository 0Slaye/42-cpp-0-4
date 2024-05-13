/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:10:44 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 15:48:40 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

using namespace std;

void	strupper(char *string)
{
	for (int i = 0; i < (int) strlen(string); i++)
		cout << (char) toupper(string[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (int i = 1; i < argc; i++)
			strupper(argv[i]);
		cout << endl;
	}
	return (0);
}