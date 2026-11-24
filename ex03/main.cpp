/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:51:41 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/24 13:40:27 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon club("crude spiked club");
    HumanA bob("Bob", club);
    HumanB jim("Jim");

    bob.attack();
    jim.setWeapon(club);
    jim.attack();

    club.setType("some other type of crude");
    bob.attack();
    jim.attack();
    return 0;
}