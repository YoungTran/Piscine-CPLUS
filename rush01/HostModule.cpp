/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostModule.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 22:01:43 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 22:01:44 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HostModule.hpp"
#include <iostream>
#include <string>
#include <sys/utsname.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <uuid/uuid.h>

HostModule::HostModule() : Module("Hostname / Username")
{

}

HostModule::HostModule(HostModule const &hm) : Module(hm)
{

}

HostModule::~HostModule()
{

}

HostModule &    HostModule::operator=(HostModule const & rhs){
   static_cast<void>(rhs);
    return *this;
}

std::string     HostModule::getData(void) {
    struct utsname  data;
    struct passwd *pass;
    std::string     result;

    uname(&data);

    result.append("HOSTNAME : ");
    result.append(data.nodename);
    result.append("\n");

    pass = getpwuid(getuid());
    result.append("   USERNAME : ");
    result.append(pass->pw_name);
    result.append("\n");

    return result;
}

