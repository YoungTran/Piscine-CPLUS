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
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{

	Bureaucrat Young("Young", 20);
	Bureaucrat Old("Old", 100);

	std::cout << "** Created Young: grade 20 **" << std::endl
			  << Young << std::endl
			  << "** Created Old: grade 100 **" << std::endl
			  << Old << std::endl;

	Intern one;
	OfficeBlock ob;

	ob.setSigner(Young);
	ob.setExecutor(Old);

	try
	{
		std::cout << std::endl
				  << "** doBureaucracy on Shrubbery Creation target Dispensary, no interns present, should catch error" << std::endl;
		ob.doBureaucracy("Shrubbery Creation", "Dispensary");
	}
	catch (OfficeBlock::NoInternException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecuterException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::SignerLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::ExecuterLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setIntern(one);
	std::cout << std::endl
			  << "** Setting Intern **" << std::endl;
	try
	{
		std::cout << std::endl
				  << "** doBureaucracy on Shrubbery Creation target Dispensary, no interns present, should catch error" << std::endl;
		ob.doBureaucracy("Shrubbery Creation", "Dispensary");
	}
	catch (OfficeBlock::NoInternException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecuterException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::SignerLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::ExecuterLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}