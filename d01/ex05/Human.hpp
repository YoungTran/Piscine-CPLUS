/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:58:56 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 21:58:57 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human {
    private:
        Brain ref;

    public:
        Human(void);
        ~Human(void);
        Brain &getBrain();
        std::string identify();
};

#endif

