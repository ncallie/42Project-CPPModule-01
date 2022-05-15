/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:16:25 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:33:12 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.h"


HumanB::HumanB(const std::string &name) : name(name) {}

HumanB::~HumanB() {

}

Weapon *HumanB::getWeapon()  {
    return weapon;
}

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::weapon = &weapon;
}

void HumanB::attack() {
    if (!weapon) {
        std::cout << name << " has nothing to attack" << std::endl;

    } else {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }

}


