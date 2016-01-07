//
//  Harry_Potter.cpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#include "Harry_Potter.hpp"


const std::string Harry::Items[3] = {"Password", "Alohamora Spell", "Red Sphere of Light"};
const std::string Harry::Characters[2] = {"Portraits", "Hermione"};

Harry::Harry()
{
}



int Harry::Special(char name[], char drink[], std::string player_name, Player* player)
{
    Menu menu;
    int harry_choice;
    menu.Harry_Potter_menu();
    
    do
    {
        menu.Harry_Potter_actions_menu();
        std::cin >> harry_choice;
        
        switch (harry_choice) {
            case 1:
                menu.Hermione_menu();
                break;
            case 2:
                if ((player->check_item_available(Items[1]) == false) && (player->check_item_available("Accio") == false) && (player->check_item_available("Aparecium") == false) && (player->check_item_available("Avada Kedavra") == false))
                {
                    std::cout <<"Fat Lady Portrait: Quite a troll, you are! Come back when you have a spell!" <<std::endl <<std::endl;
                }
                else
                {
                    menu.Portraits_menu();
                    int answer;
                    std::cin >> answer;
                    
                    if (answer == 1)
                    {
                        std::cout <<"Fat Lady Portrait: Ah! Quite a darling, you are!" <<std::endl;
                        std::cout <<"The Fat Lady's portrait swings outward, revealing a box..." <<std::endl;
                        menu.Box_menu();
                        int box_choice;
                        std::cin >> box_choice;
                        
                        if (box_choice == 1)
                        {
                            if (player->check_item_available(Items[1]))
                            {
                                std::cout <<"That spell worked! The box opens and reveals the Red Sphere of Light!" <<std::endl;
                                if (player->check_backpack_size() == 5)
                                {
                                    std::cout <<"Oh no! You're backpack is full!" <<std::endl;
                                    std::cout <<"Remove an item to allow the Red Sphere to be stored." <<std::endl;
                                    int remove_item;
                                    player->display_backpack_content();
                                    std::cin >>remove_item;
                                    player->remove_item(player->get_item(remove_item));
                                    player->input_item(Items[2]);
                                }
                                else
                                {
                                    player->input_item(Items[2]);
                                }
                            }
                            else
                            {
                                std::cout <<"That was the wrong spell." <<std::endl;
                                std::cout <<"What action would you like to take?" <<std::endl;
                                std::cout <<"\t 1: Remove the spell now and return to get another spell." <<std::endl;
                                std::cout <<"\t 2: Leave it and return to get another spell." <<std::endl;
                                int retry;
                                std::cin >>retry;
                                
                                if (retry == 1)
                                {
                                    std::cout <<"Remove an item." <<std::endl;
                                    int remove_item = 0;
                                    player->display_backpack_content();
                                    std::cin >>remove_item;
                                    player->remove_item(player->get_item((remove_item)));
                                }
                            }
                        }
                    }
                    else
                    {
                        std::cout <<"Fat Lady Portrait: Wrong! You're in a library! Learn something!" <<std::endl <<std::endl;
                    }
                }
                break;
                
            case 3:
                int spell;
                menu.Book_menu();
                std::cin >> spell;
                switch (spell) {
                    case 1:
                        player->input_item("Accio");
                        break;
                    case 2:
                        player->input_item(Items[1]);
                        break;
                    case 3:
                        player->input_item("Aparecium");
                        break;
                    case 4:
                        player->input_item("Avada Kedavra");
                        break;
                        
                    default:
                        break;
                }
                break;
                
            default:
                break;
        }
    } while (player->check_item_available(Items[2]) == false);
    
    return 0;
}
