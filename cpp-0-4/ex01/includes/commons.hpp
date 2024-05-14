/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commons.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaye <slaye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:59:28 by slaye             #+#    #+#             */
/*   Updated: 2024/05/14 16:47:22 by slaye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#define OPE_CANCELED "phonebook: Sorry, this can't be empty. Operation canceled."
#define ERR_FORMAT "phonebook: Sorry, this format is not accepted. Operation canceled."
#define ERR_INDEX "phonebook: Sorry, this index is not accepted. Operation canceled."

std::string prompt(std::string value);
void		truncate(std::string value);
void		add_mspaces(std::string value);
