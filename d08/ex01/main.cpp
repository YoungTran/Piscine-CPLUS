/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 01:16:02 by ytran             #+#    #+#             */
/*   Updated: 2018/10/12 01:16:03 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(5);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
try {
sp.addNumber(42);
}
catch (Span::TooManyException &e)
{
    std::cout << e.what() << std::endl;
}
try {
Span sp3(1);
std::cout << sp3.shortestSpan() << std::endl;
}
catch (Span::NotEnoughException &e)
{
    std::cout << e.what() << std::endl;
}
return (0);
}