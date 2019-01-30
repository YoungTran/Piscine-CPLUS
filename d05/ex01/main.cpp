/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 03:05:43 by ytran             #+#    #+#             */
/*   Updated: 2018/10/08 03:05:44 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "stdexcept"
#include "Form.hpp"

static void checkplus(Bureaucrat &test, int min, int max)
{ 
    Form form("World Peace Treaty", 100, 100);
    try
    {
        for (int i = min; i <= max; i++)
        {
            test.plusGrade();
            std::cout << test << std::endl;
            form.beSigned(test);
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return;
}

static void checkminus(Bureaucrat &test, int min, int max)
{
    Form form("World Peace Treaty", 100, 100);
    try
    {
        for (int i = min; i <= max; i++)
        {
            test.minusGrade();
            std::cout << test << std::endl;
            form.beSigned(test);
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return;
}

int main(void)
{
    Bureaucrat test("Young", 21);
    Bureaucrat test2("Tran", 21);
    Bureaucrat test3("Obama", 150);
    checkplus(test, test.getGrade(), 150);
    checkminus(test2, test2.getGrade(), 150);
    Form form("World Peace Treaty", 100, 100);
    form.beSigned(test3);
    return (0);
}