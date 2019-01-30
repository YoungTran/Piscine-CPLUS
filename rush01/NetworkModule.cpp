/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 02:30:49 by ytran             #+#    #+#             */
/*   Updated: 2018/10/14 02:30:50 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkModule.hpp"

NetworkModule::NetworkModule() : Module("Network")
{

}

NetworkModule::~NetworkModule()
{

}

NetworkModule::NetworkModule(NetworkModule const &src) : Module(src)
{
}

NetworkModule &    NetworkModule::operator=(NetworkModule const & rhs){
    static_cast<void>(rhs);
    return *this;
}

std::string     NetworkModule::getData(void) {
  	std::string packetsin = getPacketsIn();
	std::string getbytes = getBytes();
	std::string packetsout = getPacketsOut();
    std::string bytescolls = getBytesColls();
	return ("Packets in: " + packetsin +
			"   Bytes: " + getbytes +
			"   Packets out: " + packetsout +
            "   Byte colls: " + bytescolls); 
}

std::string     NetworkModule::getPacketsIn(void) {
    FILE 						*input;
    char						buffer[512];
    std::stringstream			result;

    if(not (input = popen("netstat -w1 -i en0 | awk 'NR==3 {print $1;exit}'", "r")))
        return "FUCK";
    while(fgets(buffer, sizeof(buffer), input))
        result << buffer;
    pclose(input);
    return result.str();
}

std::string     NetworkModule::getBytes(void) {
    FILE 						*input;
    char						buffer[512];
    std::stringstream			result;

    if(not (input = popen("netstat -w1 -i en0 | awk 'NR==3 {print $3;exit}'", "r")))
        return "FUCK";
    while(fgets(buffer, sizeof(buffer), input))
        result << buffer;
    pclose(input);
    return result.str();
}

std::string     NetworkModule::getPacketsOut(void) {
    FILE 						*input;
    char						buffer[512];
    std::stringstream			result;

    if(not (input = popen("netstat -w1 -i en0 | awk 'NR==3 {print $4;exit}'", "r")))
        return "FUCK";
    while(fgets(buffer, sizeof(buffer), input))
        result << buffer;
    pclose(input);
    return result.str();
}

std::string     NetworkModule::getBytesColls(void) {
    FILE 						*input;
    char						buffer[512];
    std::stringstream			result;

    if(not (input = popen("netstat -w1 -i en0 | awk 'NR==3 {print $6;exit}'", "r")))
        return "FUCK";
    while(fgets(buffer, sizeof(buffer), input))
        result << buffer;
    pclose(input);
    return result.str();
}


