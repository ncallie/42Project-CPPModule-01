/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:15:04 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:32:42 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

Zombie* newZombie( std::string name ) {
    Zombie *firstZombie = new (std::nothrow) Zombie(name);
    firstZombie->announce();
    return firstZombie;
}