/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:06:21 by ytran             #+#    #+#             */
/*   Updated: 2018/10/10 20:06:23 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
	return;
}

A::A(A &obj)
{
	*this = obj;
	return;
}

A::~A(void)
{
	return;
}

A &A::operator=(A const &r) 
{
	(void)r;
	return (*this);
}