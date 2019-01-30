/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 05:33:04 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 05:33:05 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_H
#define Intern_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Intern
{

  public:
	Intern(void);
	Intern(Intern &obj);
	virtual ~Intern(void);
	Intern &operator=(Intern const &r);

	Form *makeForm(std::string form, std::string target);
};

#endif