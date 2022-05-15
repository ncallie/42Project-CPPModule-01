/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:16:00 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:16:03 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANA_H
#define EX03_HUMANA_H


#include "Weapon.h"

class HumanA {
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(const std::string &name, Weapon &weapon);

    ~HumanA();
    void attack();
};


#endif //EX03_HUMANA_H
