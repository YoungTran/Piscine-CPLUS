/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:07:49 by ytran             #+#    #+#             */
/*   Updated: 2018/10/11 22:07:51 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

void
testValue(int val)
{
    std::list<int>    lst;

    lst.push_back(4);
    lst.push_back(8);
    lst.push_back(15);
    lst.push_back(16);
    lst.push_back(23);
    lst.push_back(42);

    std::cout << val << " -> ";
    try
    {
        easyfind<std::list<int> > (lst, val);
    }
    catch (std::string str)
    {
        std::cout << str << std::endl;
    }
}

int
main(void)
{
    testValue(1);
    testValue(4);
    testValue(16);
    testValue(29);
    testValue(42);
    return (0);
}