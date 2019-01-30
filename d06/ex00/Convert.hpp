/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:05:34 by ytran             #+#    #+#             */
/*   Updated: 2018/10/10 20:05:35 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <exception>
#include <fstream>

class Convert 
{
    private:
        std::string _input;
    
    public:
        Convert(void);
        Convert(std::string input);
        Convert(Convert &obj);
        virtual ~Convert(void);
        Convert &operator=(Convert const &x);
    
    class ConvertErrException : public std::exception
    {
        public:
            ConvertErrException(void);
            ConvertErrException(ConvertErrException const & obj);
            virtual ~ConvertErrException(void) throw();
            ConvertErrException &operator=(ConvertErrException const &x);
            const char* what(void) const throw();
    };
    operator char(void) const;
    operator float(void) const;
    operator int(void) const;
    operator double(void) const;
};

#endif
