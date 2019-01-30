/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 03:00:59 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 03:05:38 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

class Bureaucrat
{

  private:
	std::string const _name;
	int _grade;

  public:
	Bureaucrat(void);
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat &obj);
	virtual ~Bureaucrat(void);
	Bureaucrat &operator=(Bureaucrat const &r);

	void plusGrade(void);
	void minusGrade(void);

	std::string getName(void) const;
	int getGrade(void) const;

	class GradeTooHighException : public std::exception
	{
	  public:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const &obj);
		virtual ~GradeTooHighException(void) throw();
		GradeTooHighException &operator=(GradeTooHighException const &r);
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const &obj);
		virtual ~GradeTooLowException(void) throw();
		GradeTooLowException &operator=(GradeTooLowException const &r);
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &r);

#endif
