/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:16:49 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:16:51 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EX05_HARL_H
#define EX05_HARL_H


#include <string>
#include <iostream>

class Harl {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    Harl();
    ~Harl();
    void complain(std::string level );
};


#endif //EX05_HARL_H
