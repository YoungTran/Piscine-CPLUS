/* ************************************************************************** */
/*                                                                            */
/*    ShrubberyCreationForm.cpp            _              :::      ::::::::   */
/*    By: mlu               | |           | |           :+:      :+:    :+:   */
/*     ___  __ _  __ _ _ __ | | __ _ _ __ | |_        +:+ +:+         +:+     */
/*    / _ \/ _` |/ _` | '_ \| |/ _` | '_ \| __|     +/+  +:+       +/+        */
/*   |  __/ (_| | (_| | |_) | | (_| | | | | |_    +/+/+/+/+/+   +/+           */
/*    \___|\__, |\__, | .__/|_|\__,_|_| |_|\__|        /+/    /+/             */
/*          __/ | __/ | |                             ///   ////////.fr       */
/*         |___/ |___/|_|                                                     */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) : Form(obj.getName(), 145, 137)
{
	*this = obj;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &r) 
{
	(void)r;
	return (*this);
}

void					ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getEGrade()))
	{
		std::string		file = this->getName() + "_shrubbery";
		std::ofstream	ofs(file);

         ofs << ""
			 "                    dMi                              " << std::endl <<
 			 "                    MMr                              " << std::endl <<
 			 "                   4MMML                  .          " << std::endl <<
 			 "                   MMMMM.                xf          " << std::endl <<
 			 "   .              'M6MMM               .MM-          " << std::endl <<
 			 "    Mh..          +MM5MMM            .MMMM           " << std::endl <<
			 "    .MMM.         .MMMMML.          MMMMMh           " << std::endl <<
 			 "     )MMMh.        MM5MMM         MMMMMMM            " << std::endl <<
 			 "      3MMMMx.     'MMM3MMf      xnMMMMMM'            " << std::endl <<
 			 "      '*MMMMM      MMMMMM.     nMMMMMMP'             " << std::endl <<
 			 "        *MMMMMx    'MMM5M/    .MMMMMMM=              " << std::endl <<
 		     "         *MMMMMh   'MMMMM'   JMMMMMMP                " << std::endl <<
 			 "           MMMMMM   GMMMM.  dMMMMMM            .     " << std::endl <<
 			 "            MMMMMM  'MMMM  .MMMMM(        .nnMP'     " << std::endl <<
 			 " ..          *MMMMx  MMM'  dMMMM'    .nnMMMMM*       " << std::endl <<
 			 "  MMn...     'MMMMr  'MMM   MMM'   .nMMMMMMM*'         " << std::endl <<
 		     "   '4MMMMnn..   *MMM  'MM  MMP'  .dMMMMMMM''          " << std::endl <<
 			 "     ^MMMMMMMMx.  *ML 'M .M*  .MMMMMM**'             " << std::endl <<
 			 "        *PMMMMMMhn. *x > M  .MMMM**''                " << std::endl <<
 			 "           ''**MMMMhx/.h/ .=*'                       " << std::endl <<
 			 "                    .3P'%....                        " << std::endl <<
 			 "         [nosig]  nP"     "*MMnx                     " << std::endl;            
		
		
		ofs.close();
		std::cout << "Shrubbery Form has been executed by " << executor.getName() << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream			&operator<<(std::ostream &o, ShrubberyCreationForm const &r)
{
	o << "Shrubbery Creation Form Details:" << std::endl
			<< "Name: " << r.getName() << std::endl
			<< "Signing Grade Requirement: " << r.getSGrade() << std::endl
			<< "Execution Grade Requirement: " << r.getEGrade() << std::endl;
	if(r.getSigned())
			o << "Form has been signed." << std::endl;
	else
			o << "Form has not been signed yet." << std::endl;
	return (o);
}