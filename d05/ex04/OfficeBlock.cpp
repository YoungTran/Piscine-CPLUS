/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:14:56 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 18:14:57 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : _intern(NULL), _signer(NULL), _executor(NULL)
{
	return;
}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer) : _intern(&intern), _signer(&signer), _executor(&executer)
{
	return;
}

OfficeBlock::~OfficeBlock(void)
{	
	return;
}

void OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form *creation = NULL;

	if (!this->_intern)
	{
		throw OfficeBlock::NoInternException();
		return;
	}
	if (!this->_signer)
	{
		throw OfficeBlock::NoSignerException();
		return;
	}
	if (!this->_executor)
	{
		throw OfficeBlock::NoExecuterException();
		return;
	}
	creation = this->_intern->makeForm(form, target);

	if (this->_signer->getGrade() > creation->getSGrade())
	{
		delete creation;
		throw OfficeBlock::SignerLowGradeException();
		return;
	}
	creation->beSigned(*this->_signer);

	if (this->_signer->getGrade() > creation->getEGrade())
	{
		delete creation;
		throw OfficeBlock::ExecuterLowGradeException();
		return;
	}
	this->_executor->executeForm(*creation);

	delete creation;
	return;
}

void OfficeBlock::setIntern(Intern &obj)
{
	this->_intern = &obj;
	return;
}

void OfficeBlock::setSigner(Bureaucrat &obj)
{
	this->_signer = &obj;
	return;
}

void OfficeBlock::setExecutor(Bureaucrat &obj)
{
	this->_executor = &obj;
	return;
}

/*
** NoInternException Nested Class
*/

OfficeBlock::NoInternException::NoInternException(void)
{
	return;
}

OfficeBlock::NoInternException::NoInternException(NoInternException const &obj)
{
	*this = obj;
	return;
}

OfficeBlock::NoInternException::~NoInternException(void) throw()
{
	return;
}

OfficeBlock::NoInternException &OfficeBlock::NoInternException::operator=(NoInternException const &r)
{
	(void)r;
	return (*this);
}

const char *OfficeBlock::NoInternException::what() const throw()
{
	return ("OfficeBlock Error: No Intern Present");
}

/*
** NoSignerException Nested Class
*/

OfficeBlock::NoSignerException::NoSignerException(void)
{
	return;
}

OfficeBlock::NoSignerException::NoSignerException(NoSignerException const &obj)
{
	*this = obj;
	return;
}

OfficeBlock::NoSignerException::~NoSignerException(void) throw()
{
	return;
}

OfficeBlock::NoSignerException &OfficeBlock::NoSignerException::operator=(NoSignerException const &r)
{
	(void)r;
	return (*this);
}

const char *OfficeBlock::NoSignerException::what() const throw()
{
	return ("OfficeBlock Error: No Signer Present");
}

/*
** NoExecuterException Nested Class
*/

OfficeBlock::NoExecuterException::NoExecuterException(void)
{
	return;
}

OfficeBlock::NoExecuterException::NoExecuterException(NoExecuterException const &obj)
{
	*this = obj;
	return;
}

OfficeBlock::NoExecuterException::~NoExecuterException(void) throw()
{
	return;
}

OfficeBlock::NoExecuterException &OfficeBlock::NoExecuterException::operator=(NoExecuterException const &r)
{
	(void)r;
	return (*this);
}

const char *OfficeBlock::NoExecuterException::what() const throw()
{
	return ("OfficeBlock Error: No Interns Present");
}

/*
** SignerLowGradeException Nested Class
*/

OfficeBlock::SignerLowGradeException::SignerLowGradeException(void)
{
	return;
}

OfficeBlock::SignerLowGradeException::SignerLowGradeException(SignerLowGradeException const &obj)
{
	*this = obj;
	return;
}

OfficeBlock::SignerLowGradeException::~SignerLowGradeException(void) throw()
{
	return;
}

OfficeBlock::SignerLowGradeException &OfficeBlock::SignerLowGradeException::operator=(SignerLowGradeException const &r)
{
	(void)r;
	return (*this);
}

const char *OfficeBlock::SignerLowGradeException::what() const throw()
{
	return ("OfficeBlock Error: Signer's Grade is too low to sign this form");
}

/*
** ExecuterLowGradeException Nested Class
*/

OfficeBlock::ExecuterLowGradeException::ExecuterLowGradeException(void)
{
	return;
}

OfficeBlock::ExecuterLowGradeException::ExecuterLowGradeException(ExecuterLowGradeException const &obj)
{
	*this = obj;
	return;
}

OfficeBlock::ExecuterLowGradeException::~ExecuterLowGradeException(void) throw()
{
	return;
}

OfficeBlock::ExecuterLowGradeException &OfficeBlock::ExecuterLowGradeException::operator=(ExecuterLowGradeException const &r)
{
	(void)r;
	return (*this);
}

const char *OfficeBlock::ExecuterLowGradeException::what() const throw()
{
	return ("OfficeBlock Error: No Interns Present");
}