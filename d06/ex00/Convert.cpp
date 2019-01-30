/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:05:29 by ytran             #+#    #+#             */
/*   Updated: 2018/10/10 20:05:30 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <exception>
#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input)
{
	return;
}

Convert::Convert(Convert &obj) 
{
	*this = obj;
	return;
}

Convert::~Convert(void)
{
	return;
}

Convert &Convert::operator=(Convert const &r) 
{
	this->_input = r._input;
	return (*this);
}

/*
** Convert Catch Err And Cast
*/

Convert::operator char(void) const
{
	int ret = 0;

	try
	{
		ret = std::stoi(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConvertErrException());
	}
	return (static_cast<char>(ret));
	
}

Convert::operator int(void) const
{
	int ret = 0;
	try
	{
		ret = std::stoi(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConvertErrException());
	}
	return (ret);
	
}

Convert::operator float(void) const
{
	float ret = 0.0;
	try
	{
		ret = std::stof(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConvertErrException());
	}
	return (ret);
	
}

Convert::operator double(void) const
{
	float ret = 0.0;
	try
	{
		ret = std::stof(this->_input);
	}
	catch (const std::exception &e)
	{
		throw (ConvertErrException());
	}
	return (ret);
	
}


/*
** ConvertErrException Nested Class
*/

Convert::ConvertErrException::ConvertErrException(void)
{
	return;
}

Convert::ConvertErrException::ConvertErrException(ConvertErrException const &obj)
{
	*this = obj;
	return;
}

Convert::ConvertErrException::~ConvertErrException(void) throw()
{
	return;
}

Convert::ConvertErrException &Convert::ConvertErrException::operator=(ConvertErrException const &r) 
{
	(void)r;
	return (*this);
}

const char* Convert::ConvertErrException::what(void) const throw()
{
	return ("impossible");
}
