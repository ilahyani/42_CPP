/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:34:55 by ilahyani          #+#    #+#             */
/*   Updated: 2023/03/14 20:36:05 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
#define BTC_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

typedef std::pair<std::string, double> sd_pair;
typedef std::vector< std::pair<std::string, double> > vecpair;

vecpair parse_data(void);

#endif