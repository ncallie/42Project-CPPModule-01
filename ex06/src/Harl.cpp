/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:17:11 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:33:32 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.h"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    int numAction = 4;
    void (Harl::*actions[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string complaints[4] = {"DEBUG", "INFO", "WARNING",  "ERROR"};

    for (int i = 0;  i < complaints->size(); i++) {
        if (complaints[i] == level) {
            numAction = i;
        }
    }
    switch (numAction) {
        case 0:
            (this->*actions[0]) ();
        case 1:
            (this->*actions[1]) ();
        case 2:
            (this->*actions[2]) ();
        case 3:
            (this->*actions[3]) ();
            break;
    }

}