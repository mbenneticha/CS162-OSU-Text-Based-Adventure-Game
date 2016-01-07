//
//  Center.hpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#ifndef Center_hpp
#define Center_hpp

#include <stdio.h>
#include "Space.hpp"

class Center: public Space
{
public:
    Center();
    int Special(char name[], char drink[], std::string player_name, Player* player);
    void input_sphere(std::string sphere);
    void display_Oracle_container();
    
private:
    static const std::string Spheres[4]; //= {"Blue Sphere of Light", "Red Sphere of Light", "Yellow Sphere of Light", "White Sphere of Light"};
    std::vector<std::string> Oracle_container;

};

#endif /* Center_hpp */
