/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:22:53 by ilahyani          #+#    #+#             */
/*   Updated: 2022/09/01 11:02:46 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class   Contact
{
	public:
		void    add();
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_nbr;
	std::string darkest_secret;
	bool	available;
	int		history;
};

class   PhoneBook
{
	public:
		PhoneBook();
		Contact contacts[8];
		void    search();
};

int		get_oldest(PhoneBook phonebook);
int		get_index(PhoneBook phonebook);
void    print_column(std::string str);
void    print_contact(Contact contact);

#endif