/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:58 by ilahyani          #+#    #+#             */
/*   Updated: 2022/11/08 16:55:22 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define  HARL_HPP

#include <iostream>
#include <string>

class   Harl {
    public:
        void    complain(std::string level);
    void    debug(void);  
    void    info(void);  
    void    warning(void);  
    void    error(void);  
};

#endif