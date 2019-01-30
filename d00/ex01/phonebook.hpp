/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 05:10:23 by ytran             #+#    #+#             */
/*   Updated: 2018/10/02 05:10:24 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "add_data.hpp"

class Phonebook {

    public:
        Data current[8];

        Phonebook(void);
        ~Phonebook(void);
};

#endif