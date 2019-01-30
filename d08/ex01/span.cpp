/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 01:16:05 by ytran             #+#    #+#             */
/*   Updated: 2018/10/12 01:16:06 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
    return;
}

Span::Span(unsigned int num) : _maxsize(num)
{
    return;
}

Span::Span(Span const &obj)
{
    *this = obj;
    return;
}

Span::~Span(void)
{
    return;
}

Span &Span::operator=(Span const &r)
{
    this->_storage = r._storage;
    return (*this);
}

void Span::addNumber(unsigned int n)
{
    if (this->_storage.size() >= _maxsize)
        throw TooManyException();
    else
        this->_storage.push_back(n);
}

int Span::longestSpan(void)
{
    if (this->_storage.size() <= 1)
        throw NotEnoughException();
    std::vector<int> copy = this->_storage;
    std::vector<int>::iterator it = this->_storage.begin();
    std::vector<int>::iterator ite = this->_storage.end();

    return (*std::max_element(it, ite) - (*std::min_element(it, ite)));
}

int  Span::shortestSpan(void)
{
    if (this->_storage.size() <= 1)
        throw NotEnoughException();
    std::vector<int> copy = this->_storage;
    sort(copy.begin(), copy.end());
    std::vector<int>::iterator it = copy.begin();
    std::vector<int>::iterator first = copy.begin();
    std::vector<int>::iterator second = copy.end();
    it++;
    second--;
    unsigned int i = 0;
    while (i < (_maxsize))
    {
        if (abs(*first - *it) < abs(*first - *second))
            second = it;
        else if (abs(*second - *it) < abs(*first - *second))
            first = it;
        i++;
        it++;
    }
    return (abs(*first - *second));
}

/*
** TooManyException Nested Class
*/

Span::TooManyException::TooManyException(void)
{
	return;
}

Span::TooManyException::~TooManyException(void) throw()
{
	return;
}

const char* Span::TooManyException::what(void) const throw()
{
	return ("Too Many Values!!!");
}

/*
** NotEnoughException Nested Class
*/

Span::NotEnoughException::NotEnoughException(void)
{
	return;
}

Span::NotEnoughException::~NotEnoughException(void) throw()
{
	return;
}

const char* Span::NotEnoughException::what(void) const throw()
{
	return ("Not Enough Values!!!");
}
