/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:58:36 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 21:58:37 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    this->addr << this;
    return ;
}

Brain::~Brain(void)
{
    return;
}

std::string Brain::identify()
{
    return(this->addr.str());   
}
