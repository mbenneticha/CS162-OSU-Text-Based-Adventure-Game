//
//  Map.cpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/6/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#include "Map.hpp"

World::World()
{
    current_location = NULL;
    center_w = NULL;
    star_w = NULL;
    harry_p = NULL;
    dr_s = NULL;
    blnk = NULL;
    
    start = NULL;
    end = NULL;
}



void World::add(Space* coffee, Space* center, Space* star, Space* harry, Space* seuss, Space* blank)
{
    if (start == NULL)
    {
        Map *coffee1 = new Map;
        Map *center1 = new Map;
        Map *star1 = new Map;
        Map *harry1 = new Map;
        Map *seuss1 = new Map;
        Map *blank1 = new Map;
        Map *out1 = new Map;
        
        coffee1->area = coffee;
        center1->area = center;
        star1->area = star;
        harry1->area = harry;
        seuss1->area = seuss;
        blank1->area = blank;
        
        coffee1->pointer_1 = center1;
        coffee1->pointer_2 = NULL;
        coffee1->pointer_3 = NULL;
        coffee1->pointer_4 = NULL;
        coffee1->pointer_5 = NULL;
        
        center1->pointer_1 = star1;
        center1->pointer_2 = harry1;
        center1->pointer_3 = seuss1;
        center1->pointer_4 = blank1;
        center1->pointer_5 = NULL;
        
        star1->pointer_1 = center1;
        star1->pointer_2 = NULL;
        star1->pointer_3 = NULL;
        star1->pointer_4 = NULL;
        star1->pointer_5 = NULL;
        
        harry1->pointer_1 = center1;
        harry1->pointer_2 = NULL;
        harry1->pointer_3 = NULL;
        harry1->pointer_4 = NULL;
        harry1->pointer_5 = NULL;
        
        seuss1->pointer_1 = center1;
        seuss1->pointer_2 = NULL;
        seuss1->pointer_3 = NULL;
        seuss1->pointer_4 = NULL;
        seuss1->pointer_5 = NULL;
        
        blank1->pointer_1 = center1;
        blank1->pointer_2 = NULL;
        blank1->pointer_3 = NULL;
        blank1->pointer_4 = NULL;
        blank1->pointer_5 = NULL;
        
        out1->pointer_1 = coffee1;
        out1->pointer_2 = NULL;
        out1->pointer_3 = NULL;
        out1->pointer_4 = NULL;
        out1->pointer_5 = NULL;
        
        start = coffee1;
        
        end = out1;
        
        current_location = coffee1;
        
        center_w = center1;
        star_w = star1;
        harry_p = harry1;
        dr_s = seuss1;
        blnk = blank1;
    }
}


void World::set_current_location()
{
    if (current_location == center_w)
    {
        if (star_w != NULL)
        {
            current_location = center_w->pointer_1;
            star_w = NULL;
        }
        else if (harry_p != NULL)
        {
            current_location = center_w->pointer_2;
            harry_p = NULL;
        }
        else if (dr_s != NULL)
        {
            current_location = center_w->pointer_3;
            dr_s = NULL;
        }
        else if (blnk != NULL)
        {
            current_location = center_w->pointer_4;
            blnk = NULL;
        }
        else
        {
            current_location = center_w->pointer_5;
        }
    }
    else if (current_location->area == start->area)
    {
        current_location = start->pointer_1;
    }
    else if (current_location == end)
    {
        current_location = end->pointer_1;
    }
}


Space* World::get_current_location()
{
    return current_location->area;
}
