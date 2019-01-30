/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 21:25:55 by ytran             #+#    #+#             */
/*   Updated: 2018/10/12 21:26:35 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include <stack>
#include <string>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
        std::list<T> _stack;
    
    public:
        MutantStack<T>(void)
        {
            return;
        }
        MutantStack<T>(MutantStack const &obj)
        {
            (void)obj;
            return;
        }
        ~MutantStack<T>(void)
        {
            return;
        }
        MutantStack &operator=(MutantStack const &obj)
        {
            (void)obj;
            return;
        }
        T top(void)
        {
            return (_stack.front());
        }
        T size(void)
        {
            return (_stack.size());
        }
        typedef std::list<int>::iterator iterator;
        iterator begin(void)
        {
            return (_stack.begin());
        }
        iterator end(void)
        {
            return (_stack.end());
        }
        void push(T val)
        {
            _stack.push_front(val);
        }
        void pop(void)
        {
            _stack.pop_front();
        }
};
#endif
