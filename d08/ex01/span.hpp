/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 01:16:11 by ytran             #+#    #+#             */
/*   Updated: 2018/10/12 01:16:12 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <list>
#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span {
    
    private:
        std::vector<int> _storage;
        unsigned int _maxsize;

    public:
        Span(void);
        Span(unsigned int num);
        Span(Span const &obj);
        ~Span(void);
        Span &operator=(Span const &r);
    
    class TooManyException : public std::exception
    {
        public:
            TooManyException(void);
            TooManyException(TooManyException const &obj);
            virtual ~TooManyException(void) throw();
            TooManyException &operator=(TooManyException &obj);
            virtual const char* what() const throw();
    };
    class NotEnoughException : public std::exception
    {
        public:
            NotEnoughException(void);
            NotEnoughException(TooManyException const &obj);
            virtual ~NotEnoughException(void) throw();
            TooManyException &operator=(TooManyException &obj);
            virtual const char* what() const throw();
    };
    void addNumber(unsigned int n);
    int shortestSpan(void);
    int longestSpan(void);
};

#endif