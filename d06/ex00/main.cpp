/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:05:41 by ytran             #+#    #+#             */
/*   Updated: 2018/10/10 20:05:44 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Enter a number." << std::endl;
		return (0);
	}
	Convert test(av[1]);
	std::cout << std::fixed << std::setprecision(1);

	std::cout << "char: ";
	try
	{
		int check = static_cast<int>(test);

		if (check >= 33 && check <= 126)
			std::cout << "'" << static_cast<char>(check) << "'" << std::endl;
		else
			std::cout << "Not a char." << std::endl;
	}
	catch (Convert::ConvertErrException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error !" << std::endl;
	}

	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(test) << std::endl;
	}
	catch (Convert::ConvertErrException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error !" << std::endl;
	}

	std::cout << "float: ";
	try
	{
		std::cout << static_cast<float>(test) << "f" << std::endl;
	}
	catch (Convert::ConvertErrException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error !" << std::endl;
	}

	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(test) << std::endl;
	}
	catch (Convert::ConvertErrException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error !" << std::endl;
	}

	return (0);
}
