/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSModule.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 23:01:26 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 23:01:26 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OSModule.hpp"
#include <iostream>
#include <string>
#include <sys/utsname.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <uuid/uuid.h>

OSModule::OSModule() : Module("OS INFO MODULE"){}

OSModule::OSModule(OSModule const &) : Module("OS INFO MODULE"){}

OSModule::~OSModule()
{

}

OSModule &    OSModule::operator=(OSModule const & rhs){
    static_cast<void>(rhs);
    return *this;
}

std::string     OSModule::getData(void) {
    struct utsname  data;
    std::string     result;

    uname(&data);

    result.append("SysName : ");
    result.append(data.sysname);
    result.append("\n");

    result.append("   Version : ");
    result.append(data.version);
    result.append("\n");

    return result;
}


