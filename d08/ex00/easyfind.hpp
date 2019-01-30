/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:07:42 by ytran             #+#    #+#             */
/*   Updated: 2018/10/11 22:07:43 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef EASYFIND_H
# define EASYFIND_H

# include <list>
# include <vector>
# include <iostream>
# include <algorithm>

template <typename T>
void easyfind(T &one, int n)
{
    typename T::const_iterator it;
    it = find(one.begin(), one.end(), n);
    if (it != one.end())
        std::cout << "Ok !" << std::endl;
    else
        throw(std::string("Error !"));
}
#endif

