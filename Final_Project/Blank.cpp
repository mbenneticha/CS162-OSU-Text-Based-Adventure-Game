//
//  Blank.cpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#include "Blank.hpp"

const std::string Blank::Items[5] = {"Raptor Talon", "Red Apple", "One Ring", "Glass Shoe", "White Sphere of Light"};
const std::string Blank::Characters[4] = {"Ian Malcolm", "Snow White", "Aragorn", "Cinderella"};

Blank::Blank()
{
}

int Blank::Special(char name[], char drink[], std::string player_name, Player* player)
{
    Menu menu;
    int blank_choice;
    menu.Blank_menu();
    std::cin >>blank_choice;
        
    switch (blank_choice) {
        case 1:
            int jurassic_answer;
            do {
                menu.Jurassic_menu();
                std::cin >> jurassic_answer;
                
                if (jurassic_answer != 3)
                {
                    std::cout <<"Your answer is incorrect. Try again!" <<std::endl;
                }
            } while (jurassic_answer != 3);
            if (jurassic_answer == 3)
            {
                std::cout <<"Ian Malcolm: That is correct! The final sphere is now yours." <<std::endl;
                if (player->check_backpack_size() == 5)
                {
                    std::cout <<"Oh no! You're backpack is full!" <<std::endl;
                    std::cout <<"Remove an item." <<std::endl;
                    int remove_item;
                    player->display_backpack_content();
                    std::cin >>remove_item;
                    player->remove_item(player->get_item(remove_item));
                    player->input_item(Items[4]);
                    player->display_backpack_content();
                }
                else
                {
                    player->input_item(Items[4]);
                }
            }
            break;
            
        case 2:
            int snow_white_answer;
            do {
                menu.Snow_White_menu();
                std::cin >> snow_white_answer;
                
                if (snow_white_answer != 1)
                {
                    std::cout <<"Your answer is incorrect. Try again!" <<std::endl;
                }
            } while (snow_white_answer != 1);
            if (snow_white_answer == 1)
            {
                std::cout <<"Snow White: That is correct! The final sphere is now yours." <<std::endl;
                if (player->check_backpack_size() == 5)
                {
                    std::cout <<"Oh no! You're backpack is full!" <<std::endl;
                    std::cout <<"Remove an item." <<std::endl;
                    int remove_item;
                    player->display_backpack_content();
                    std::cin >>remove_item;
                    player->remove_item(player->get_item(remove_item));
                    player->input_item(Items[4]);
                    player->display_backpack_content();
                }
                else
                {
                    player->input_item(Items[4]);
                }
            }
            break;
            
        case 3:
            int lotr_answer;
            do {
                menu.LOTR_menu();
                std::cin >> lotr_answer;
                
                if (lotr_answer != 3)
                {
                    std::cout <<"Your answer is incorrect. Try again!" <<std::endl;
                }
                
            } while (lotr_answer != 3);
            if (lotr_answer == 3)
            {
                std::cout <<"Legolas: That is correct! The final sphere is now yours." <<std::endl;
                if (player->check_backpack_size() == 5)
                {
                    std::cout <<"Oh no! You're backpack is full!" <<std::endl;
                    std::cout <<"Remove an item." <<std::endl;
                    int remove_item;
                    player->display_backpack_content();
                    std::cin >>remove_item;
                    player->remove_item(player->get_item(remove_item));
                    player->input_item(Items[4]);
                    player->display_backpack_content();
                }
                else
                {
                    player->input_item(Items[4]);
                }
            }
            break;
            
        case 4:
            int cinderella_answer;
            do {
                menu.Cinderella_menu();
                std::cin >> cinderella_answer;
                
                if (cinderella_answer != 4)
                {
                    std::cout <<"Your answer is incorrect. Try again!" <<std::endl;
                }
            } while (cinderella_answer != 4);
            if (cinderella_answer == 4)
            {
                std::cout <<"Cinderella: That is correct! The final sphere is now yours." <<std::endl;
                if (player->check_backpack_size() == 5)
                {
                    std::cout <<"Oh no! You're backpack is full!" <<std::endl;
                    std::cout <<"Remove an item." <<std::endl;
                    int remove_item;
                    player->display_backpack_content();
                    std::cin >>remove_item;
                    player->remove_item(player->get_item(remove_item));
                    player->input_item(Items[4]);
                    player->display_backpack_content();
                }
                else
                {
                    player->input_item(Items[4]);
                }
            }
            break;
            
        default:
            break;
    }
    
    
    return 0;
}