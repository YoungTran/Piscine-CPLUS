/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NCursesDiplay.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:45:34 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 20:45:35 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NCursesDiplay.hpp"

typedef struct s_mod t_mod;

NcursesDisplay::NcursesDisplay(void)
{
    return;
}

NcursesDisplay::NcursesDisplay(NcursesDisplay const &obj)
{
    *this = obj;
}

NcursesDisplay::~NcursesDisplay(void)
{
    return;
}

NcursesDisplay & NcursesDisplay::operator=(NcursesDisplay const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}

void    NcursesDisplay::displayAlgo(struct s_mod *host){
    int pos_x, pos_y;

    int max = this->getY() / host->mod->getSizeY();
    pos_y = ((this->_mods.size() % max) * host->mod->getSizeY());
    int nb_l = (((this->_mods.size()) * (host->mod->getSizeY())) / (this->getY()));
    nb_l = this->_mods.size() == 0 ? 0 : nb_l;
    pos_x = (nb_l > 0 ? (nb_l) : 2);
    host->mod->setX(pos_x);
    host->mod->setY(pos_y);
}

void    NcursesDisplay::initAttrModules(Module *module){
    struct s_mod *host = new struct s_mod();
    host->mod = module;
    host->mod->setSizeY(10);
    host->mod->setSizeX(42);
    this->displayAlgo(host);
    host->win = subwin(stdscr, host->mod->getSizeY(), host->mod->getSizeX(), host->mod->getY(), host->mod->getX());
    mvwprintw(host->win, 1, 3, host->mod->getName().c_str());
    mvwprintw(host->win, 3, 3, host->mod->getData().c_str());
    this->_mods.push_back(host);
}

void    NcursesDisplay::initModules(int flag)
{
    if ((1 & flag) > 0)
		this->initAttrModules(new HostModule());
	if ((2 & flag) > 0)
		this->initAttrModules(new OSModule());
	if ((4 & flag) > 0)
		this->initAttrModules(new DateModule());
 	if ((8 & flag) > 0)
 		this->initAttrModules(new CPUmodule());
 	if ((16 & flag) > 0)
 		this->initAttrModules(new RAMmodule());
 	if ((32 & flag) > 0)
 		this->initAttrModules(new NetworkModule());
    if ((64 & flag) > 0)
        this->initAttrModules(new UniCorn());
}

void    NcursesDisplay::init(int flag){
    initscr();
    getmaxyx(stdscr, this->_x, this->_y);
    curs_set(FALSE);
    noecho();
    keypad(stdscr, TRUE);
    timeout(50);
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    wborder(stdscr, 0, 0, 0, 0, 0, 0, 0, 0);
    initModules(flag);
    for_each(this->_mods.begin(), this->_mods.end(), drawMod);
    refresh();
    return ;
}

void drawMod(struct s_mod *mod)
{
    wborder(mod->win, 0, 0, 0, 0, 0, 0, 0, 0);
}

int     NcursesDisplay::getX(){
    return this->_x;
}

int     NcursesDisplay::getY(){
    return this->_y;
}

void    NcursesDisplay::setX(int x){
    this->_x = x;
}

void    NcursesDisplay::setY(int y){
    this->_y = y;
}

void    NcursesDisplay::quit(){
    endwin();
    exit(0);
}

void    NcursesDisplay::play(){
    int key;
    while (42){
        while ((key = getch()) != ERR){
             if (key == KEY_UP){
                 quit();
            }
            else if (key == KEY_DOWN){

            }
            else if (key == ' '){

            }
        }
        this->update();
    }
}

void    update_mod(struct s_mod *host){
    mvwprintw(host->win, 1, 3, host->mod->getName().c_str());
    mvwprintw(host->win, 3, 3, host->mod->getData().c_str());
}

void    NcursesDisplay::update(){
    erase();
    for_each(this->_mods.begin(), this->_mods.end(), update_mod);
    for_each(this->_mods.begin(), this->_mods.end(), drawMod);
    refresh();
}