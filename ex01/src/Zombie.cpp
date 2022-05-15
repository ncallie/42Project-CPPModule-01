/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:15:36 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:32:57 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

int Zombie::zombieCount = 0;

Zombie::Zombie() {
    std::cout <<"Hello, I'm a zombie number  " << zombieCount + 1 << std::endl;
    zombieCount++;
}

Zombie::~Zombie() {
    std::cout << name << " - died" << std::endl;
    zombieCount--;
    std::cout << zombieCount << " zombies left alive" << std::endl;
}

void Zombie::setName(const std::string name) {
    this->name = name;
}

void Zombie::announce() {
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}


