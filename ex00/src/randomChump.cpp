/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:15:12 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:32:45 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Zombie.h"

void randomChump( std::string name ) {
    Zombie secondZombie(name);
    secondZombie.announce();
}