/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:15:50 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 16:15:51 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_H
#define IMONITORDISPLAY_H

#include <string> 

class IMonitorDisplay {
    
    private:
        int _flag;

    public:
        virtual void init(int flag);
        virtual void quit() = 0;
        virtual void play() = 0;
        virtual ~IMonitorDisplay() = 0;
};

#endif
