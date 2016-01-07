//
//  main.cpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#include "Menu.hpp"
#include "Player.hpp"
#include "Map.hpp"
#include "Space.hpp"
#include "Center.hpp"
#include "Coffee_Shop.hpp"
#include "Star_Wars.hpp"
#include "Harry_Potter.hpp"
#include "Dr_Seuss.hpp"
#include "Blank.hpp"


#include <fstream>
#include <sstream>
#include <string>

#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
    Menu menu;
    int menu_choice;
    
    do
    {
        menu_choice = menu.game_menu();
        
        if (menu_choice == 1)
        {
            //timer
            clock_t end;
            end = clock() + 900;
            clock();
            
            //set up game and play
            do {
                World map;
                Coffee_Shop coffee_shop;
                Center center;
                Star_Wars star_wars;
                Harry harry_potter;
                Seuss dr_seuss;
                Blank blank;
                
                //create player
                Player player;
                
                //set up map
                map.add(&coffee_shop, &center, &star_wars, &harry_potter, &dr_seuss, &blank);
                
                std::cin.clear();
                std::cin.ignore();
                
                //take in player's name
                std::string player_name;
                std::cout <<"What is your name?" <<std::endl;
                std::getline(std::cin, player_name);
                player.set_player_name(player_name);
                
                //intrigue user by individualizing game slightly.
                //take in favorite coffee shop
                //take in favorite hot drink (not everyone is a coffee drinker)
                char name[50];
                char drink[50];
                std::cout <<player.display_player_name() << ", enter the name of your favorite café." <<std::endl;
                std::cin.getline(name, 50);
                std::cout <<player.display_player_name() << ", what is your favorite hot drink?" <<std::endl;
                std::cin.getline(drink, 50);
                
                
                
                //set player in first space
                player.set_player_space(map.get_current_location());
                
                //play coffee shop
                coffee_shop.Special(name, drink, player.display_player_name(), &player);
                
                
                //player exit coffee shop and enter center room
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                //play center
                center.Special(name, drink, player.display_player_name(), &player);
                
                //player exit center room and enter star wars room
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                //play star wars
                star_wars.Special(name, drink, player.display_player_name(), &player);
                
                
                //player returns to center
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                //give Oracle sphere
                int sphere_choice;
                do {
                    menu.Oracle_give_sphere();
                    std::cin >> sphere_choice;
                } while (sphere_choice != 1);
                
                if (sphere_choice == 1)
                {
                    center.input_sphere("Blue Sphere of Light");
                    player.display_backpack_content();
                    player.remove_item("Blue Sphere of Light");
                    std::cout <<"Blue Sphere of Light has been given to Oracle." <<std::endl <<std::endl;
                    
                    center.display_Oracle_container();
                }
                
                //play center (riddle for room 2)
                center.Special(name, drink, player.display_player_name(), &player);
                
                //player exit center room and enters harry potter room
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                //play harry potter
                harry_potter.Special(name, drink, player.display_player_name(), &player);
                
                //player returns to center
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                //give Oracle sphere
                sphere_choice = 0;
                do {
                    menu.Oracle_give_sphere();
                    std::cin >> sphere_choice;
                } while (sphere_choice != 1);
                
                if (sphere_choice == 1)
                {
                    center.input_sphere("Red Sphere of Light");
                    player.remove_item("Red Sphere of Light");
                    player.display_backpack_content();
                    
                    center.display_Oracle_container();
                }
                
                //play center (riddle for room 3)
                center.Special(name, drink, player.display_player_name(), &player);
                
                //player exit center room and enters dr.seuss room
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                //play dr.seuss
                dr_seuss.Special(name, drink, player.display_player_name(), &player);
                
                
                //player returns to center
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                //give Oracle sphere
                sphere_choice = 0;
                do {
                    menu.Oracle_give_sphere();
                    std::cin >> sphere_choice;
                } while (sphere_choice != 1);
                
                if (sphere_choice == 1)
                {
                    center.input_sphere("Yellow Sphere of Light");
                    std::cout <<"You have given the Oracle the Yellow Sphere of Light." <<std::endl;
                    player.remove_item("Yellow Sphere of Light");
                    player.display_backpack_content();
                    
                    center.display_Oracle_container();
                }
                
                //play center (riddle for room 4)
                center.Special(name, drink, player.display_player_name(), &player);
                
                //player exit center room and enters blank room
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                
                //play blank
                blank.Special(name, drink, player.display_player_name(), &player);
                
                //player returns to center
                map.set_current_location();
                player.set_player_space(map.get_current_location());
                
                //give Oracle sphere
                sphere_choice = 0;
                do {
                    menu.Oracle_give_sphere();
                    std::cin >> sphere_choice;
                } while (sphere_choice != 1);
                
                if (sphere_choice == 1)
                {
                    center.input_sphere("Yellow Sphere of Light");
                    std::cout <<"You have given the Oracle the Yellow Sphere of Light." <<std::endl;
                    player.remove_item("Yellow Sphere of Light");
                    player.display_backpack_content();
                    
                    center.display_Oracle_container();
                }
                
                //play center (riddle for room 4)
                center.Special(name, drink, player.display_player_name(), &player);
                break;
            } while (clock() <= end);
        }
        else if (menu_choice == 2)
        {
            std::cout <<"Program Ended!" <<std::endl;
        }
        else
        {
            std::cout << "Please select the number corresponding to the action you wish to complete." << std::endl;
        }
    } while (menu_choice!= 2);
    return 0;
}
