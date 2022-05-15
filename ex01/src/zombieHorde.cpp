/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:15:42 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:32:59 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

Zombie* zombieHorde(int N, std::string name ) {
    if (N < 1) {
        std::cout << "Zero or negative number" << std::endl;
        return NULL;
    }
    Zombie *horde = new (std::nothrow) Zombie[N];
    if (!horde) {
        std::cout << "Error memory allocation" << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}