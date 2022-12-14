/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:22:53 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/16 17:45:59 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <limits>

class   Contact
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_nbr;
	std::string darkest_secret;
	public:
		void    add();
};

class   PhoneBook
{
	public:
		PhoneBook();
		Contact contacts[8];
		void    search();
};

int		get_oldest(PhoneBook PhoneBook);
int		get_index(PhoneBook PhoneBook);
void    print_column(std::string str);
void    print_contact(Contact contact);

#endif
