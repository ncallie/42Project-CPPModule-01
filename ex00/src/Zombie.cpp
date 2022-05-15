/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:15:18 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:32:47 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Zombie.h"

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout <<"Hello, I'm a zombie named " << name << std::endl;
}


void Zombie::announce() {
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " - died" << std::endl;
}





