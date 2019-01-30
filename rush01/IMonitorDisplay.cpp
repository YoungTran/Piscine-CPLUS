/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:15:41 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 16:16:05 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"

void IMonitorDisplay::init(int flag)
{
    this->_flag = flag;
    return;
}

IMonitorDisplay::~IMonitorDisplay(){

}

