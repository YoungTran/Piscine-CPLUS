/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:58:45 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 21:58:46 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <sstream>
#include <string>

class Brain {

    private:
        std::stringstream addr;

    public:

        Brain(void);
        ~Brain(void);
        std::string identify();

};

#endif