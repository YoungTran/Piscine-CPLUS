/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NCursesDiplay.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:45:24 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 20:45:24 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NCURSESDISPLAY_H
#define NCURSESDISPLAY_H

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <ncurses.h>
# include <string.h>
# include <algorithm>

#include "HostModule.hpp"
#include "OSModule.hpp"
#include "DateModule.hpp"
#include "Module.hpp"
#include "IMonitorDisplay.hpp"
#include "CPUmodule.hpp"
#include "RAMmodule.hpp"
#include "UniCorn.hpp"
#include "NetworkModule.hpp"

class NcursesDisplay : public IMonitorDisplay
{
    protected:
        int _x;
        int _y;
    
    public:
        NcursesDisplay(void);
        NcursesDisplay(NcursesDisplay const &obj);
        virtual ~NcursesDisplay(void);
        NcursesDisplay & operator=(NcursesDisplay const & rhs);
        virtual void    init(int flag);
        void            initModules(int flag);
        void            initAttrModules(Module *module);
        virtual void    quit();
        int             getX();
        int             getY();
        void            setY(int);
        void            setX(int);
        void            play();

        void            displayAlgo(struct s_mod *host);
        void            update();
        std::vector<struct s_mod *> _mods;
};

struct s_mod
{
    Module *mod;
    WINDOW *win;
};
void drawMod(struct s_mod *mod);
#endif
