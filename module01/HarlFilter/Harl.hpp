/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:12:58 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/22 18:22:48 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define  HARL_HPP

#include <iostream>
#include <string>

class   Harl {
    void    debug(void);  
    void    info(void);  
    void    warning(void);  
    void    error(void);  
    public:
        void    complain(std::string level);
};

#endif