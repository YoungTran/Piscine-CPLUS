/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 05:33:11 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 05:33:12 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern &obj)
{
	*this = obj;
	return;
}

Intern::~Intern(void)
{
	return;
}

Intern &Intern::operator=(Intern const &r)
{
	(void)r;
	return (*this);
}

Form *Intern::makeForm(std::string form, std::string target)
{
	if (form == "shrubbery creation" || form == "Shrubbery Creation")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form == "robotomy request" || form == "Robotomy Request")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form == "presidential pardon" || form == "Presidential Pardon")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else
		std::cout << "Intern failed to create " << form << std::endl;
	return (NULL);
}