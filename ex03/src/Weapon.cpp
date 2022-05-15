/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:16:34 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:33:18 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.h"


Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon() {
}

const std::string &Weapon::getType()  {
    return type;
}

void Weapon::setType(const std::string &type) {
    Weapon::type = type;
}


