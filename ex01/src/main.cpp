/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:15:32 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:32:54 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.h"

int main() {
    int count = 10;
    Zombie *horde = zombieHorde(count, "Horde");
    if (!horde) {
        std::cout << "Error..." << std::endl;
        return 0;
    }
    for (int i = 0; i < count; i++) {
        horde[i].announce();
    }
    delete[] horde;
}
