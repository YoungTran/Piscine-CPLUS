/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SFMLDisplay.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:42:27 by ytran             #+#    #+#             */
/*   Updated: 2018/10/14 19:42:28 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SFMLDisplay.hpp"

typedef struct x_mod y_mod;

SFMLDisplay::SFMLDisplay(void)
{
    return;
}

SFMLDisplay::SFMLDisplay(SFMLDisplay const &obj)
{
    *this = obj;
}

SFMLDisplay::~SFMLDisplay(void)
{
    return;
}

SFMLDisplay & SFMLDisplay::operator=(SFMLDisplay const &rhs)
{
    static_cast<void>(rhs);
    return *this;
}

std::string    SFMLDisplay::initModules(Module *module)
{
    struct x_mod *host = new struct x_mod();
    host->mod = module;
    this->_mods.push_back(host);
    return (host->mod->getData());
}

std::string    SFMLDisplay::inithost(void)
{  
    std::string input;
    input = this->initModules(new HostModule);
    return (input);
}

std::string    SFMLDisplay::initOS(void)
{  
    std::string input;
    input = this->initModules(new OSModule);
    return (input);
}

std::string    SFMLDisplay::initDate(void)
{  
    std::string input;
    input = this->initModules(new DateModule);
    return (input);
}
std::string    SFMLDisplay::initCPU(void)
{  
    std::string input;
    input = this->initModules(new CPUmodule);
    return (input);
}
std::string    SFMLDisplay::initRAM(void)
{  
    std::string input;
    input = this->initModules(new RAMmodule);
    return (input);
}
std::string    SFMLDisplay::initNetwork(void)
{  
    std::string input;
    input = this->initModules(new NetworkModule);
    return (input);
}
std::string    SFMLDisplay::initUniCorn(void)
{  
    std::string input;
    input = this->initModules(new UniCorn);
    return (input);
}
void    SFMLDisplay::play(void)
{
    sf::RenderWindow window(sf::VideoMode(1500, 1100), "SFML");

    
    while (window.isOpen())
    {
        std::string host = inithost();
        std::string os = initOS();
        std::string date = initDate();
        std::string cpu = initCPU();
        std::string ram = initRAM();
        std::string network = initNetwork();
        std::string unicorn = initUniCorn();
        sf::Font font;
        font.loadFromFile("Azonix.otf");
        sf::Text text(host, font, 30);
        sf::Text text2(os, font, 20);
        sf::Text text3(date, font, 30);
        sf::Text text4(cpu, font, 30);
        sf::Text text5(ram, font, 30);
        sf::Text text6(network, font, 30);
        sf::Text text7(unicorn, font, 30);
        text.setPosition(10, 30);
        text2.setPosition(10, 160);
        text3.setPosition(10, 300);
        text4.setPosition(10, 420);
        text5.setPosition(10, 650);
        text6.setPosition(10, 800);
        text7.setPosition(10, 1000);
        text.setFillColor(sf::Color::Blue);
        text2.setFillColor(sf::Color::Green);
        text3.setFillColor(sf::Color::Red);
        text4.setFillColor(sf::Color::Blue);
        text5.setFillColor(sf::Color::Green);
        text6.setFillColor(sf::Color::Red);
        text7.setFillColor(sf::Color::Cyan);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == (sf::Keyboard::Q))
                    exit(0);
            }
        }
        window.clear();
        window.draw(text);
        window.draw(text2);
        window.draw(text3);
        window.draw(text4);
        window.draw(text5);
        window.draw(text6);
        window.draw(text7);
        window.display();
    }
}

void    SFMLDisplay::quit(void)
{
    return;
}