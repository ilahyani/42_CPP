/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:34:18 by ilahyani          #+#    #+#             */
/*   Updated: 2023/03/18 16:56:27 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool is_valid(struct tm td)
{
    int year = td.tm_year + 1900;
    int month = td.tm_mon + 1;
    int day = td.tm_mday;

    if (year < 2009 || year > 2023)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    if (day > 29 && month == 2)
        return false;
    if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11))
        return false;
    if (day > 31 && (month == 1 || month == 2 || month == 3 || month == 6 || month == 7 || month == 9 || month == 12))
        return false;
    return true;
}

std::string	trim(std::string str)
{
	str.erase(str.find_last_not_of(" \t\n\r\f\v") + 1);
	str.erase(0, str.find_first_not_of(" \t\n\r\f\v"));
	return str;
}

bool    is_number(std::string value)
{
    bool isFloat = false;

    for (size_t i = 0; i < value.size(); i++) {
        if (value[i] == '.') {
            if (isFloat)
                return false;
            isFloat = true;
        }
        else if (value[i] < '0' || value[i] > '9')return false;
    }
    if (atof(value.c_str()) < 0 || atof(value.c_str()) > 1000)
        return false;
    return true;
}

void    get_values(std::map<time_t, float> _map, std::string line)
{
    std::map<time_t, float>::iterator  it;
    std::string     date;
    std::string     value;
    float           v;
    struct tm       timeDate;
    char            *p;

    date = line.substr(0, line.find("|"));
    value = line.substr(line.find("|") + 1, line.size());
    date = trim(date);
    value = trim(value);
    if (!date.size() || !value.size() || !is_number(value)) {
        std::cerr << "Error: bad input\n";
        return;
    }
    v = atof(value.c_str());
    memset(&timeDate, 0, sizeof(struct tm));
    p = strptime(date.c_str(), "%Y-%m-%d", &timeDate);
    if (!p || *p != '\0') {
        std::cerr << "Error: bad input\n";
        return;
    }
    if (!is_valid(timeDate) || _map.upper_bound(mktime(&timeDate)) == _map.begin()) {
        std::cerr << "Error: bad input\n";
        return;
    }
    it = _map.upper_bound(mktime(&timeDate));
    std::cout << date << " => " << v << " = " << v * (*(--it)).second << "\n";
}

std::map<time_t, float> parse_data(void)
{
    std::ifstream   data;
    std::string     line;
    struct tm       timeDate;
    std::map<time_t, float> m;
    
    data.open("data.csv");
    if (!data.is_open())
        std::cout << "Error: could not open database\n";
    getline(data, line);
    while (getline(data, line)) {
        memset(&timeDate, 0, sizeof(struct tm));
        strptime(line.substr(0, 10).c_str(), "%Y-%m-%d", &timeDate);
        m.insert(std::pair<time_t,float>( mktime(&timeDate), atof(line.substr(11, line.size()).c_str())));
    }
    return m;
}