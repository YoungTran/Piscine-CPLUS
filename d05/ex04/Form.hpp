/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 03:41:34 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 03:41:35 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
	std::string const _name;
	bool _signed;
	int const _sgrade;
	int const _egrade;

  public:
	Form(void);
	Form(std::string const name, int sgrade, int egrade);
	Form(Form &obj);
	virtual ~Form(void);
	Form &operator=(Form const &r);
	std::string getName(void) const;
	bool getSigned(void) const;
	int getSGrade(void) const;
	int getEGrade(void) const;
	void beSigned(Bureaucrat &r);
  virtual void 		execute(Bureaucrat const &obj) const = 0;

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

std::ostream &operator<<(std::ostream &o, Form const &r);

#endif
