/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 05:11:45 by ytran             #+#    #+#             */
/*   Updated: 2018/10/02 05:11:46 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "add_data.hpp"

Data::Data(void)
{
    return;
}

Data::~Data(void)
{
    return;
}

void Data::add_data(std::string input, int i)
{
    switch(i)
    {
        case 0:
            this->_firstname = input;
        case 1:
            this->_lastname = input;
        case 2:
            this->_nickname = input;
        case 3:
            this->_login = input;
        case 4:
            this->_address = input;
        case 5:
            this->_email = input;
        case 6:
            this->_phone = input;
        case 7:
            this->_birthday = input;
        case 8:
            this->_meal = input;
        case 9:
            this->_underwear = input;
        case 10:
            this->_secret = input;
    }
}

std::string Data::get_data(int i)
{
    switch(i)
    {
        case 0:
            return (this->_firstname);
        case 1:
            return (this->_lastname);
        case 2:
            return (this->_nickname);
        case 3:
            return (this->_login);
        case 4:
            return (this->_address);
        case 5:
            return (this->_email);
        case 6:
            return (this->_phone);;
        case 7:
            return (this->_birthday);
        case 8:
            return (this->_meal);
        case 9:
            return (this->_underwear);
        case 10:
            return (this->_secret);
    }
    return ("error");
}