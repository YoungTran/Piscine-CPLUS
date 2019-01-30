/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SFMLDisplay.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:30:55 by ytran             #+#    #+#             */
/*   Updated: 2018/10/14 19:30:58 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFMLDISPLAY_HPP
# define SFMLDISPLAY_HPP

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
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "SFMLDisplay.hpp"



class SFMLDisplay : public IMonitorDisplay
{
	 protected:
        int _x;
        int _y;
    
    public:
        SFMLDisplay(void);
        SFMLDisplay(SFMLDisplay const &obj);
        ~SFMLDisplay(void);
        SFMLDisplay & operator=(SFMLDisplay const & rhs);

        std::string            initModules(Module *module);
        std::string            inithost(void);
        std::string            initOS(void);
        std::string            initDate(void);
        std::string            initCPU(void);
        std::string            initRAM(void);
        std::string            initNetwork(void);
        std::string            initUniCorn(void);
        void            play();
		void			quit();
        std::vector<struct x_mod *> _mods;
};

struct x_mod
{
    Module *mod;
    WINDOW *win;
};
#endif
