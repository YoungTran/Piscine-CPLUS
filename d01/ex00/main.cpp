/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 01:54:47 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 01:54:50 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheHeap(void)
{
    Pony    *heap = new Pony();

    std::cout << "Pony heap height: " << heap->get_height("14.5") << "ft. This is a pony."
        << std::endl;
    delete heap;
}

static void ponyOnTheStack(void)
{
    Pony stack[1];

    std::cout << "Pony stack height: " << stack->get_height("16") << "ft. This is not a pony"
        << std::endl; 
}

int main()
{
   std::cout << "Pony on the heap" << std::endl;
   ponyOnTheHeap();
   std::cout << "Pony on the stack" << std::endl;
   ponyOnTheStack();
   return (0);
}