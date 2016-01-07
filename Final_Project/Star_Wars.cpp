//
//  Star_Wars.cpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#include "Star_Wars.hpp"

const std::string Star_Wars::Items[3] = { "Lightsaber", "Yoda's Code", "Blue Sphere of Light"};
const std::string Star_Wars::Character[3] = {"R2D2", "Yoda", "Sith"};


Star_Wars::Star_Wars()
{
}



int Star_Wars::Special(char name[], char drink[], std::string player_name, Player* player)
{
    Menu menu;
    //Player player;
    
    //intro star_wars room
    menu.Star_Wars_menu();
    
    do {
        menu.Star_Wars_actions_menu();
        
        int user_choice_1;
        std::cin >>user_choice_1;
        
        switch (user_choice_1) {
            case 1:
                player->input_item(Items[0]);
                player->display_backpack_content();
                break;
            case 2:
                menu.R2D2_menu(Character[0]);
                int R2_D2_choice;
                std::cin >> R2_D2_choice;
                
                int move_poster_choice;
                switch (R2_D2_choice) {
                    case 1:
                        std::cout <<"You lift the Star Wars Poster off the wall and in the space the poster filled," <<std::endl;
                        std::cout <<"you see a wall-safe!" <<std::endl <<std::endl;
                        
                        std::cout <<"What action would you like to take?" <<std::endl;
                        std::cout <<"\t 1:Enter the code to open the wall-safe." <<std::endl;
                        std::cout <<"\t 2:Put the poster back in it's place and interact with another character." <<std::endl;
                        std::cin >> move_poster_choice;
                        
                        if (move_poster_choice == 1)
                        {
                            std::cout <<"You inspect the safe and determine that the code you must insert contains" <<std::endl;
                            std::cout <<"two two-digit values in this format: ##-##." <<std::endl <<std::endl;
                            
                            std::cout <<"What action would you like to take?" <<std::endl;
                            std::cout <<"\t 1:Use the code you've stored in your backpack." <<std::endl;
                            std::cout <<"\t 2:Go back and try find the code." <<std::endl;
                            
                            int code_choice;
                            std::cin >> code_choice;
                            
                            if (code_choice == 1)
                            {
                                player->check_item_available(Items[1]);
                                std::cout <<"You try the code you've attained and it works! The safe swings open." <<std::endl;
                                player->remove_item(Items[1]);
                                std::cout <<"Inside the safe, you see a glowing sphere of blue light." <<std::endl;
                                std::cout <<"It's what the Oracle was asking for!" <<std::endl;
                                if (player->check_backpack_size() != 5)
                                {
                                    player->input_item(Items[2]);
                                }
                                else
                                {
                                    int item_num;
                                    std::cout <<"Remove an item so you can store the Blue Sphere in your backpack." <<std::endl;
                                    std::cout <<"Which item would you like to remove?" <<std::endl;
                                    player->display_backpack_content();
                                    std::cin >> item_num;
                                    player->remove_item(player->get_item(item_num));
                                    player->input_item(Items[2]);
                                    //std::cout <<"\t Item has been removed from your backpack." <<std::endl;
                                    //std::cout <<"\t Blue Sphere has been stored in your backpack." <<std::endl;
                                }
                            }
                            else if (code_choice == 2)
                            {
                                break;
                            }
                        }
                        break;
                        
                    case 2:
                        std::cout <<"You take a closer look at the Star Wars Poster. It's a gray background showing" <<std::endl;
                        std::cout <<"the sillouhette of Darth-Vaders mask. In white is the following text:" <<std::endl <<std::endl;
                        std::cout <<" \t \t \t *-------------------*" <<std::endl;
                        std::cout <<" \t \t \t |     STAR WARS     |" <<std::endl;
                        std::cout <<" \t \t \t | IT'S NOT OVER YET |" <<std::endl;
                        std::cout <<" \t \t \t |        VII        |" <<std::endl;
                        std::cout <<" \t \t \t | THE FORCE AWAKENS |" <<std::endl;
                        std::cout <<" \t \t \t *-------------------* " <<std::endl <<std::endl;
                        break;
                        
                    case 3:
                        std::cout <<"You: I'm looking for my way out, R2! I don't have time for promotional posters." <<std::endl;
                        std::cout <<"[R2 bleeps something about thick skulls as you walk away]" <<std::endl <<std::endl;
                        break;
                        
                    default:
                        break;
                }
                break;
                
            case 3:
                int Yoda_choice;
                do
                {
                    menu.Yoda_menu(Character[1]);
                    std::cin >> Yoda_choice;
                    if (Yoda_choice != 2)
                    {
                        std::cout <<"Wrong, that code is. Try again young Jedi!" <<std::endl;
                    }
                    
                } while (Yoda_choice != 2);
                if (Yoda_choice == 2)
                {
                    std::cout <<"Correct, that code is. Well, on your journey, be!" <<std::endl <<std::endl;
                    if (player->check_backpack_size() == 5)
                    {
                        std::cout <<"Oh no! You're backpack is full!" <<std::endl;
                        std::cout <<"Remove an item." <<std::endl;
                        int remove_item;
                        player->display_backpack_content();
                        std::cin >>remove_item;
                        player->remove_item(player->get_item(remove_item));
                        player->input_item(Items[1]);
                        player->display_backpack_content();
                    }
                    else
                    {
                        player->input_item(Items[1]);
                    }
                }
                break;
                
            case 4:
                std::cout <<"You approach the Sith. His head whips up to look at you." <<std::endl;
                std::cout <<"His face is painted red with geometric black lines throughout." <<std::endl;
                std::cout <<"His eyes are filled with evil hatred." <<std::endl <<std::endl;
                
                std::cout <<"What action would you like to take?" <<std::endl;
                std::cout <<"\t 1:Fight the Sith. [hint: make sure you have a lightsaber!]" <<std::endl;
                std::cout <<"\t 2:Retreat!" <<std::endl;
                int approach_sith_choice;
                std::cin >>approach_sith_choice;
                
                if (approach_sith_choice == 1)
                {
                    menu.Sith_menu(Character[2]);
                }
                else if (approach_sith_choice == 2)
                {
                    std::cout <<Character[2] <<": Be glad I let you live." <<std::endl;
                    std::cout <<"You kick yourself off a nearby wall to retreat quickly." <<std::endl;
                }
                break;
                
            default:
                break;
        }
    } while (player->check_item_available(Items[2]) == false);
    
    
    
    
    return 0;
}

