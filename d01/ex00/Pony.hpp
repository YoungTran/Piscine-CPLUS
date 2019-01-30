/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 01:54:38 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 01:54:40 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>
#include <iostream>

class Pony {

    private:
        std::string _height;

    public:
        Pony(void);
        ~Pony(void);
        std::string get_height(std::string height);
};

#endif