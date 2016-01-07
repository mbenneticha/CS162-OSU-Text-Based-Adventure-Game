//
//  Star_Wars.hpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#ifndef Star_Wars_hpp
#define Star_Wars_hpp

#include <stdio.h>
#include "Space.hpp"

class Star_Wars: public Space
{
public:
    Star_Wars();
    int Special(char name[], char drink[], std::string player_name, Player* player);
    
private:
    static const std::string Items[3];// = { "Lightsaber", "Yoda's Code", "Blue Sphere of Light"};
    static const std::string Character[3];// = {"R2D2", "Yoda", "Sith"};
};

#endif
