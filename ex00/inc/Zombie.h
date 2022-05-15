/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:19:18 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:19:21 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ZOMBIE_H
#define EX00_ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif //EX00_ZOMBIE_H
