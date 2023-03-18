/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:34:55 by ilahyani          #+#    #+#             */
/*   Updated: 2023/03/18 17:19:58 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
#define BTC_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <time.h>
#include <stdlib.h>

void    get_values(std::map<time_t, float> _map, std::string line);
std::map<time_t, float> parse_data(void);

#endif