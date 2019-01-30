/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUmodule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:46:32 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/13 20:46:34 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPUmodule.hpp"
#define BUFFCPU 8

CPUmodule::CPUmodule() : Module("CPU"){}

CPUmodule::CPUmodule(CPUmodule const &src) : Module(src){}

CPUmodule::~CPUmodule(){}

CPUmodule &    CPUmodule::operator=(CPUmodule const & rhs){
	static_cast<void>(rhs);
	return *this;
}

std::string     CPUmodule::getData(void) {
	std::string usercpu = getUserCPU();
	std::string syscpu = getSysCPU();
	std::string idlecpu = getIdleCPU();
	std::string getmodel = getModelCPU();
	std::string getspeed = getSpeedCPU();
	std::string cpucores = getCoresCPU();
	return ("User CPU: " + usercpu +
			"   Sys CPU: " + syscpu +
			"   Idle CPU: " + idlecpu +
			"   Modal CPU: " + getmodel +
			"   CPU speed: " + getspeed +
			"   CPU cores: " + cpucores);
}

std::string                     CPUmodule::getUserCPU(void){
	FILE                        *input;
	char                        buffer[BUFFCPU];
	std::stringstream           result;

	if(!(input = popen("top -l1 -n0 | grep CPU  | awk {'print $3'}", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}

std::string                     CPUmodule::getSysCPU(void){
	FILE                        *input;
	char                        buffer[BUFFCPU];
	std::stringstream           result;

	if(!(input = popen("top -l1 -n0 | grep CPU  | awk {'print $5'}", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}

std::string						CPUmodule::getIdleCPU(void){
	FILE						*input;
	char						buffer[BUFFCPU];
	std::stringstream			result;

	if(!(input = popen("top -l1 -n0 | grep CPU  | awk {'print $7'}", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}

std::string						CPUmodule::getModelCPU(void){
	FILE						*input;
	char						buffer[BUFFCPU];
	std::stringstream			result;

	if(!(input = popen("system_profiler SPHardwareDataType | grep \"Processor Name\" | awk {'print $3,$4,$5'}", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}

std::string						CPUmodule::getSpeedCPU(void){
	FILE						*input;
	char						buffer[BUFFCPU];
	std::stringstream			result;

	if(!(input = popen("system_profiler SPHardwareDataType | grep \"Processor Speed\" | awk {'print $3,$4'}", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}

std::string						CPUmodule::getCoresCPU(void){
	FILE						*input;
	char						buffer[BUFFCPU];
	std::stringstream			result;

	if(!(input = popen("system_profiler SPHardwareDataType | grep \"Total Number of Cores\" | awk {'print $5'}", "r")))
		return 0;
	while(fgets(buffer, sizeof(buffer), input))
		result << buffer;
	pclose(input);
	return (((result.str()).c_str()));
}
