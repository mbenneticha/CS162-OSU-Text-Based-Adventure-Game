//
//  Blank.hpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#ifndef Blank_hpp
#define Blank_hpp

#include <stdio.h>
#include "Space.hpp"

class Blank: public Space
{
public:
    Blank();
    int Special(char name[], char drink[], std::string player_name, Player* player);
    
private:
    static const std::string Items[5];// = {"Raptor Talon", "Red Apple", "One Ring", "Glass Shoe", "White Sphere of Light"};
    static const std::string Characters[4];// = {"Ian Malcolm", "Snow White", "Aragorn", "Cinderella"};
};

#endif /* Blank_hpp */
