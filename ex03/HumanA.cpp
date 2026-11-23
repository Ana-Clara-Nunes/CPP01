/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:50:55 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/23 15:50:58 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
    : name(name), weapon(weapon)
{
}

void HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their "
              << this->weapon.getType() << std::endl;
}