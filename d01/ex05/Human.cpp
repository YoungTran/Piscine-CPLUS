/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:58:52 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 21:58:53 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}

std::string Human::identify()
{
	return (this->ref.identify());
}

Brain &Human::getBrain(void)
{
	return (this->ref);
}
