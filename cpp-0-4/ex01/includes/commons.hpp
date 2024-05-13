/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commons.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:59:28 by slaye             #+#    #+#             */
/*   Updated: 2024/05/13 18:20:38 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

#define OPE_CANCELED "phonebook: Sorry, this can't be empty. Operation canceled."

string	prompt(string value);
void	truncate(string value);
void	add_mspaces(string value);
