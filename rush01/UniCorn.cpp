/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UniCorn.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 16:05:54 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/14 16:05:58 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "UniCorn.hpp"

UniCorn::UniCorn() : Module("Animal"){}
UniCorn::~UniCorn(){}
UniCorn::UniCorn(UniCorn const &src) : Module(src){}
UniCorn &    UniCorn::operator=(UniCorn const & rhs){
	static_cast<void>(rhs);
	return *this;
}

std::string     UniCorn::getData(void) {
	
	srand(time(0));
	int		i = rand() % 4;
	std::string Animal;

	if (i < 2)
		return (Animal = "/\\o.o/\\");
	else if (i == 2 )
		return (Animal = "/>o . o<\\");
	else if (i == 3 )
		return (Animal = "(='+'=)");
	else
		return (Animal = ("(=o-*-o=)"));
}


