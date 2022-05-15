/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:16:10 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:16:13 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_WEAPON_H
#define EX03_WEAPON_H
#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(const std::string &type);
    ~Weapon();

    const std::string &getType();
    void setType(const std::string &type);
};

#endif //EX03_WEAPON_H
