/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateModule.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 23:01:38 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 23:01:39 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DateModule.hpp"
#include <iostream>
#include <string>


DateModule::DateModule() : Module("Date")
{

}

DateModule::DateModule(DateModule const &dm) : Module(dm)
{

}

DateModule::~DateModule()
{

}

DateModule &    DateModule::operator=(DateModule const & rhs){
    static_cast<void>(rhs);
    return *this;
}

std::string     DateModule::getData(void) {
    std::string         result;
    time_t              rawtime;
    struct tm          *timeinfo;
    char                buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 80, "Current time: %e/%m/%Y %I:%M:%S%p.", timeinfo);

    result = std::string(buffer);
    return result;
}
