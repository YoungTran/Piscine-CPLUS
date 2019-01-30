/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 19:59:04 by ytran             #+#    #+#             */
/*   Updated: 2018/10/11 19:59:08 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Array.hpp"

int				main(void)
{
	Array<int> noparam;
	std::cout << "No Param: " << noparam.size() << std::endl;
	srand(time(0));
	int	n = rand() % 42;
	Array<int> test(n);

	std::cout << "Size of Array made: " << test.size() << std::endl << std::endl <<
		"Now filling array with random stuff and printing it" << std::endl
		<< "(will print one past extra for error exception)" << std::endl << std::endl;;

	try
	{
		unsigned int i = 0;
		while (i < test.size())
		{
			test[i] = rand() % 21;
			i++;
		}
		i = 0;
		while (i <= test.size())
		{
			std::cout << "Array[" << i << "] Content: " << test[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
