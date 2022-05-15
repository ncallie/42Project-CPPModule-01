/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:16:05 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:16:08 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANB_H
#define EX03_HUMANB_H


#include "Weapon.h"

class HumanB {
    std::string name;
    Weapon *weapon;
    Weapon *getWeapon();
public:
    HumanB(const std::string &name);

    ~HumanB();

    void setWeapon(Weapon &weapon);

    void attack();
};


#endif //EX03_HUMANB_H
