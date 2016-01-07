//
//  Coffee_Shop.hpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#ifndef Coffee_Shop_hpp
#define Coffee_Shop_hpp

#include <stdio.h>
#include <iostream>
#include "Space.hpp"


class Coffee_Shop: public Space
{
public:
    Coffee_Shop();
    int Special(char name[], char drink[], std::string player_name, Player* player);
    
private:
    static const std::string Items[2];// = {"$20 bill", "Penny"};
};

#endif 
