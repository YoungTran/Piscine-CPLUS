/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:14:50 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 18:14:52 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_H
#define OFFICEBLOCK_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

class OfficeBlock
{
  private:
	OfficeBlock(OfficeBlock &obj);
	OfficeBlock &operator=(OfficeBlock const &r);

	Intern *_intern;
	Bureaucrat *_signer;
	Bureaucrat *_executor;

  public:
	OfficeBlock(void);
	OfficeBlock(Intern &i, Bureaucrat &j, Bureaucrat &k);
	~OfficeBlock(void);
	void doBureaucracy(std::string form, std::string target);
	void setIntern(Intern &idiot);
	void setSigner(Bureaucrat &B);
	void setExecutor(Bureaucrat &A);

	class NoInternException : public std::exception
	{

	  public:
		NoInternException(void);
		NoInternException(NoInternException const &obj);
		virtual ~NoInternException(void) throw();
		NoInternException &operator=(NoInternException const &r);
		virtual const char *what() const throw();
	};

	class NoSignerException : public std::exception
	{
	  public:
		NoSignerException(void);
		NoSignerException(NoSignerException const &obj);
		virtual ~NoSignerException(void) throw();
		NoSignerException &operator=(NoSignerException const &r);
		virtual const char *what() const throw();
	};

	class NoExecuterException : public std::exception
	{
	  public:
		NoExecuterException(void);
		NoExecuterException(NoExecuterException const &obj);
		virtual ~NoExecuterException(void) throw();
		NoExecuterException &operator=(NoExecuterException const &r);
		virtual const char *what() const throw();
	};

	class SignerLowGradeException : public std::exception
	{
	  public:
		SignerLowGradeException(void);
		SignerLowGradeException(SignerLowGradeException const &obj);
		virtual ~SignerLowGradeException(void) throw();
		SignerLowGradeException &operator=(SignerLowGradeException const &r);
		virtual const char *what() const throw();
	};

	class ExecuterLowGradeException : public std::exception
	{
	  public:
		ExecuterLowGradeException(void);
		ExecuterLowGradeException(ExecuterLowGradeException const &obj);
		virtual ~ExecuterLowGradeException(void) throw();
		ExecuterLowGradeException &operator=(ExecuterLowGradeException const &r);
		virtual const char *what() const throw();
	};
};

#endif