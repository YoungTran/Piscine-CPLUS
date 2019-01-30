/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 03:05:43 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 03:05:44 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"

int	main()
{
	int i = 0;
	int x = 0;
	Bureaucrat test("Young", 1);
	std::cout << "** Created Bureaucrat Young **" << std::endl <<
		std::endl << "Demonstrating error handling" << std::endl << std::endl;
	while(i++ < 10)
	{
		try
		{
			if (i % 2 == 0)
				x = 0;
			else
				x = 151;
			Bureaucrat test2("Error Testing", x);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "** Creating new Bureaucrat lol starting grade 8, will increase grade until its too high **" << 
		std::endl << std::endl;
	try
	{
		Bureaucrat test3("lol", 8);
		std::cout << test3;
		i = 0;
		while (i++ < 10)
		{
			std::cout << "* Incremented " << test3.getName() << " grade. Old grade: [" << test3.getGrade() << "]. New Grade: [";
			test3.plusGrade();
			std::cout << test3.getGrade() << "] *" << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << "] *" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << "] *" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << "] *" << std::endl;
	}

	std::cout << std::endl << "** Creating new Bureaucrat Young starting grade 130, will decrease grade until its too low **" << 
		std::endl << std::endl;
	try
	{
		Bureaucrat test4("Young", 130);
		std::cout << test4;
		i = 0;
		x = 0;
		while (i++ < 10)
		{
			std::cout << "* Incremented " << test4.getName() << " grade. Old grade: [" << test4.getGrade() << "]. New Grade: [";
			test4.minusGrade();
			std::cout << test4.getGrade() << "] *" << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << "] *" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << "] *" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << "] *" << std::endl;
	}

	std::cout << std::endl << "** End demonstration, now displaying << operator from Young who was made at the start **" <<
		std::endl << test;
	return (0);
}