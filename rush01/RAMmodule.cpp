/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMmodule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:48:06 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/13 20:48:08 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RAMmodule.hpp"
#include <stdlib.h>
#define BUFFRAM 8

RAMmodule::RAMmodule() : Module("RAM"){}
RAMmodule::~RAMmodule(){}
RAMmodule::RAMmodule(RAMmodule const &src) : Module(src){}
RAMmodule &    RAMmodule::operator=(RAMmodule const & rhs){
	(void)rhs;
	return *this;
}

std::string     RAMmodule::getData(void) {
	std::string totalram = getTotalRAM();
	std::string usedram = getUsedRAM();
	std::string freeram = getFreeRAM();
	return ("Total Ram: " + totalram +
			"   Used Ram: " + usedram +
			"   Free Ram: " + freeram);
}

std::string						RAMmodule::getTotalRAM(void){
	FILE 						*input;
	char						buffer[BUFFRAM];
	std::stringstream			result;

	if(!(input = popen("top -l1 -n0 | grep PhysMem  | awk {'print $2'} | sed 's/(//g'", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}

std::string						RAMmodule::getUsedRAM(void){
	FILE 						*input;
	char						buffer[BUFFRAM];
	std::stringstream			result;

	if(!(input = popen("top -l1 -n0 | grep PhysMem  | awk {'print $4'} | sed 's/(//g'", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}
std::string						RAMmodule::getFreeRAM(void){
	FILE 						*input;
	char						buffer[BUFFRAM];
	std::stringstream			result;

	if(!(input = popen("top -l1 -n0 | grep PhysMem  | awk {'print $6'} | sed 's/(//g'", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}


