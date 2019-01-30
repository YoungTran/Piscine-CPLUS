/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 02:57:27 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 02:57:38 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat &obj)
{
	*this = obj;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &r)
{
	this->_grade = r._grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::minusGrade(void)
{
	if (this->_grade <= 1)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		this->_grade -= 1;
	}
	return;
}

void Bureaucrat::plusGrade(void)
{
	if (this->_grade >= 150)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		this->_grade += 1;
	}
	return;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in)
{
	out << "<" << in.getName() << ">, bureaucrat grade <" << in.getGrade() << ">" << std::endl;
	return (out);
}

/*
** GradeTooHighException Nested Class
*/

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &r)
{
	(void)r;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high .");
}

/*
** GradeTooLowException Nested Class
*/

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &r)
{
	(void)r;
	return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low .");
}
