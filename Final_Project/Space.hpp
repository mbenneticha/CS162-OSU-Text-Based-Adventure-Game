//
//  Space.hpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#ifndef Space_hpp
#define Space_hpp

#include <stdio.h>
#include <fstream>
#include <sstream>
#include <string>

#include "Menu.hpp"
#include "Player.hpp"



class Space
{
    friend class Map;
    friend class Player;
public:
    Space();
    
    //pure virtual function
    virtual int Special(char name[], char drink[], std::string player_name, Player* player) = 0;
    
};


#endif /* Space_hpp */
