/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Module.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:55:28 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 20:55:29 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Module.hpp"
#include <iostream>

Module::Module(std::string const & name) : _name(name)
{

}

Module::Module(Module const & src, std::string const & name) : _name(name){
    *this = src;
}

Module::~Module()
{

}

Module &    Module::operator=(Module const & rhs){
    static_cast<void>(rhs);
    return *this;
}

std::string      Module::getName() const{
    return this->_name;
}

void            Module::setSizeX(int x){
    this->_sx = x;
}

void            Module::setSizeY(int y){
    this->_sy = y;
}

void            Module::setY(int y){
    this->_y = y;
}

void            Module::setX(int x){
    this->_x = x;
}

int             Module::getSizeX(){
    return this->_sx;
}

int             Module::getSizeY(){
    return this->_sy;
}

int             Module::getY(){
    return this->_y;
}

int             Module::getX(){
    return this->_x ;
}
std::string     Module::getData(void) {
    std::string     result;

    result.append("EMPTY MODULE\n");

    return result;
}


