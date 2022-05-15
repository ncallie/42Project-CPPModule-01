/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:15:26 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:15:28 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EX01_ZOMBIE_H
#define EX01_ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

private:
    static int zombieCount;
    std::string name;
public:
    Zombie();
    ~Zombie();

    void setName(std::string name);
    void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif //EX01_ZOMBIE_H
