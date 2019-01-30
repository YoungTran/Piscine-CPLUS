/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 05:43:03 by ytran             #+#    #+#             */
/*   Updated: 2018/10/02 05:43:04 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "add_data.hpp"
#include "phonebook.hpp"
#include <iomanip>

std::string	check_length(Phonebook *instance, int i, int x)
{
	std::string input = instance->current[i].get_data(x);
	int a = input.length();

	if (a > 10)
	{
		input.erase(9, a);
		std::cout << input;
		return (".");
	}
	while (a++ < 10)
		std::cout << " ";
	return (input);
}

void		display_info(Phonebook *instance, int i)
{
	std::cout << "First Name: " << instance->current[i].get_data(0) << std::endl;
	std::cout << "Last Name: " << instance->current[i].get_data(1) << std::endl;
	std::cout << "Nickname: " << instance->current[i].get_data(2) << std::endl;
	std::cout << "Login: " << instance->current[i].get_data(3) << std::endl;
	std::cout << "Postal Address: " << instance->current[i].get_data(4) << std::endl;
	std::cout << "Email Address: " << instance->current[i].get_data(5) << std::endl;
	std::cout << "Phone Number: " << instance->current[i].get_data(6) << std::endl;
	std::cout << "Birthdate: " << instance->current[i].get_data(7) << std::endl;
	std::cout << "Favorite Meal: " << instance->current[i].get_data(8) << std::endl;
	std::cout << "Underwear Color: " << instance->current[i].get_data(9) << std::endl;
	std::cout << "Darkest Secret: " << instance->current[i].get_data(10) << std::endl;
}

void check_index(Phonebook *instance, std::string response)
{
    if (response == "1" && (instance->current[0].get_data(0) != ""))
		display_info(instance, 0);
	else if (response == "2" && (instance->current[1].get_data(0) != ""))
		display_info(instance, 1);
	else if (response == "3" && (instance->current[2].get_data(0) != ""))
		display_info(instance, 2);
	else if (response == "4" && (instance->current[3].get_data(0) != ""))
		display_info(instance, 3);
	else if (response == "5" && (instance->current[4].get_data(0) != ""))
		display_info(instance, 4);
	else if (response == "6" && (instance->current[5].get_data(0) != ""))
		display_info(instance, 5);
	else if (response == "7" && (instance->current[6].get_data(0) != ""))
		display_info(instance, 6);
	else if (response == "8" && (instance->current[7].get_data(0) != ""))
		display_info(instance, 7);
	else
		std::cout << "Sorry, that index number is invalid." << std::endl;

}

void    search_contacts(Phonebook *instance, int *index)
{
    int i = 0;
    std::string output;
    std::string response;

    if (*index == 0)
    {
        std::cout << "No available contacts. Please add contacts." << std::endl;
        return ;
    }
    std::cout << std::right << std::setw(10) << "index" << " | ";
	std::cout << std::right << std::setw(10) << "first name" << " | ";
	std::cout << std::right << std::setw(10) << "last name" << " | ";
	std::cout << std::right << std::setw(10) << "nickname" << std::endl;
    std::cout << std::endl;
    while (i < *index)
	{
		std::cout << "|         " << (i + 1) << "|";
		output = check_length(instance, i, 0);
		std::cout << output << "|";
		output = check_length(instance, i, 1);
		std::cout << output << "|";
		output = check_length(instance, i, 2);
		std::cout << output << "|" << std::endl;
		i++;
	}
    std::cout << "which contact would you like to look for? Enter their index number." << std::endl;
    std::getline(std::cin, response);
    check_index(instance, response);
}

void    add_contact(Phonebook *instance, int *index)
{
    int i = 0;
    std::string response = " ";

    if (*index == 8)
    {
        std::cout << "Too many contacts!" << std::endl;
        return;
    }
    std::cout << "Please enter the following data for contact:" << std::endl;
    std::cout << "First Name: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Last Name: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Nickname: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Login: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Address: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "E-Mail: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Phone Number: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Birthday: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Favorite Meal: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Underwear Color: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, response);
    instance->current[*index].add_data(response, i++);
    std::cout << "Success you've added " << instance->current[*index].get_data(0)
        << " " << instance->current[*index].get_data(1) << std::endl;
    *index = *index + 1;
}

int     main(void)
{
    int limit = 0;
    std::string input;
    Phonebook instance[8];

    std::cout << "Welcome to the Phonebook App!" << std::endl;
    std::cout << "Pick a command: " << std::endl;
    std::cout << "ADD / SEARCH / EXIT" << std::endl;
    while (std::getline(std::cin, input, '\n'))
    {
       if (input.compare("ADD") == 0)
            add_contact(instance, &limit);
       else if (input.compare("SEARCH") == 0)
           search_contacts(instance, &limit);
       else if (input.compare("EXIT") == 0)
       {
            std::cout << "The contacts are lost forever." << std::endl;
            break ;    
       }
    }
    return (0);
}