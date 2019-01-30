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

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat
{
private:
  int _grade;
  std::string const _name;

public:
  Bureaucrat(void);
  Bureaucrat(std::string name, int grade);
  Bureaucrat(Bureaucrat &src);
  virtual ~Bureaucrat(void);
  Bureaucrat &operator=(const Bureaucrat &rhs);
  void setGrade(int grade);
  void plusGrade(void);
  void minusGrade(void);
  int getGrade(void) const;
  std::string getName(void) const;

public:
  class GradeTooLowException : public std::exception
  {
  public:
    GradeTooLowException(void);
    GradeTooLowException(const GradeTooLowException &src);
    virtual ~GradeTooLowException(void) throw();
    GradeTooLowException &operator=(const GradeTooLowException &rhs);
    virtual const char *what(void) const throw();
  };

  class GradeTooHighException : public std::exception
  {
  public:
    GradeTooHighException(void);
    GradeTooHighException(const GradeTooHighException &src);
    virtual ~GradeTooHighException(void) throw();
    GradeTooHighException &operator=(const GradeTooHighException &rhs);
    virtual const char *what(void) const throw();
  };
};
std::ostream &operator<<(std::ostream &out,
                         const Bureaucrat &rhs);

#endif