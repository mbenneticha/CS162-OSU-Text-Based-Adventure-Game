//
//  Harry_Potter.hpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#ifndef Harry_Potter_hpp
#define Harry_Potter_hpp

#include <stdio.h>
#include "Space.hpp"

class Harry: public Space
{
public:
    Harry();
    int Special(char name[], char drink[], std::string player_name, Player* player);
    
private:
    static const std::string Items[3]; //= {"Password", "Alohamora Spell", "Red Sphere of Light"};
    static const std::string Characters[2]; //= {"Portraits", "Hermione"};
};

#endif /* Harry_Potter_hpp */
