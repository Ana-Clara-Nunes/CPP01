/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:51:41 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/23 15:51:42 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon club("tijolo");
    HumanA bob("Bastião", club);
    HumanB jim("José");

    bob.attack();
    jim.setWeapon(club);
    jim.attack();

    club.setType("pá de areia");
    bob.attack();
    jim.attack();
    return 0;
}