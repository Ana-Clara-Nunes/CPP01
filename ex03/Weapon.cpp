/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:51:50 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/23 15:51:51 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(const std::string &type) : type(type)
{
}

const std::string &Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}