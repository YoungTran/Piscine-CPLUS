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
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    else
      this->_grade = grade;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat &object)
{
    *this = object;
    return ;
}
Bureaucrat::~Bureaucrat(void)
{
    return;
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void					Bureaucrat::executeForm(Form const &form)
{
	if (this->_grade < form.getEGrade())
	{
		std::cout << "Bureaucrat " << this->_name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	else
		std::cout << "Bureaucrat " << this->_name << " grade is too low (" << this->_grade << "). They need a grade of "
			<< form.getEGrade() << " to execute " << form.getName() << std::endl;
	return;
}


void Bureaucrat::plusGrade(void)
{
    if (this->_grade <= 1)
    {
        throw (Bureaucrat::GradeTooHighException());
    }
    else
    {
        this->_grade -= 1;
    }
    return ;
}

void Bureaucrat::minusGrade(void)
{
    if (this->_grade >= 150)
    {
        throw (Bureaucrat::GradeTooLowException());
    }
    else
    {
        this->_grade += 1;
    }
    return ;
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}


void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
    {
        throw (Bureaucrat::GradeTooHighException());
    }
    else if (grade > 150)
    {
        throw (Bureaucrat::GradeTooLowException());
    }
    else
    {
        this->_grade = grade;
    }
    return ;
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &r)
{
    out << r.getName() << ", bureaucrat grade " << r.getGrade() \
        << std::endl;
    return (out);
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &r)
{
    this->_grade = r._grade;
    return (*this);
}

/*
** Too Low except
*/

Bureaucrat:: GradeTooLowException::GradeTooLowException(void)
{
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &rhs)
{
    (void)rhs;
    return (*this);
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low...");
}

/*
** Grade too high exceptions
*/

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return ;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &rhs)
{
    (void)rhs;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high...");
}
