/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 20:52:50 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/21 15:33:26 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *heapZombie = newZombie("HeapZombie");

    heapZombie->announce();
    randomChump("StackZombie");
    delete heapZombie;
    return 0;
}