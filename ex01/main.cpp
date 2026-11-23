/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 20:52:50 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/23 14:46:04 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    const int N = 5;
    Zombie *horde = zombieHorde(N, "Suburban Zombie");
    if (horde == NULL)
        return 1;
    for (int i = 0; i < N; ++i)
        horde[i].announce();
    delete[] horde;
    return 0;
}