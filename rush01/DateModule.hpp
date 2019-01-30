/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 23:01:35 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 23:01:36 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATEMODULE_HPP
#define DATEMODULE_HPP

# include "Module.hpp"
class DateModule : public Module
{
    public:
        DateModule();
        DateModule(DateModule const & src);
        DateModule &    operator=(DateModule const & rhs);
        ~DateModule();

        std::string     getData(void);
};

#endif 
