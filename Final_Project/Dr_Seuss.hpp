//
//  Dr_Seuss.hpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#ifndef Dr_Seuss_hpp
#define Dr_Seuss_hpp

#include <stdio.h>
#include "Space.hpp"

class Seuss: public Space
{
public:
    Seuss();
    int Special(char name[], char drink[], std::string player_name, Player* player);
    
private:
    static const std::string Items[4];// = {"Truffla-tree tuff", "Thneed", "15¢", "Yellow Sphere of Light"};
    static const std::string Characters[2];// = {"Humming Fish", "Once-ler"};
};

#endif 
