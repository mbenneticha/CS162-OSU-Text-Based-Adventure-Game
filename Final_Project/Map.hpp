//
//  Map.hpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/6/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp

#include <stdio.h>
#include "Space.hpp"
#include <iostream>

class World
{
    //create map
    struct Map
    {
        Space* area;
        struct Map *pointer_1;
        struct Map *pointer_2;
        struct Map *pointer_3;
        struct Map *pointer_4;
        struct Map *pointer_5;
    };
    
public:
    World();
    void add(Space* coffee, Space* center, Space* star, Space* harry, Space* seuss, Space* blank);
    void set_current_location();
    Space* get_current_location();
    
private:
    Map *current_location;
    Map *center_w;
    Map *star_w;
    Map *harry_p;
    Map *dr_s;
    Map *blnk;
    
    Map *start;
    Map *end;
};

#endif /* Map_hpp */
