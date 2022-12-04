/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <ilahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:31:18 by ilahyani          #+#    #+#             */
/*   Updated: 2022/12/04 18:56:22 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
int easyfind(T c, int x)
{
    typename T::iterator it = find(c.begin(), c.end(), x);
    if (it != c.end())
        return (*it);
    return (-1);
}