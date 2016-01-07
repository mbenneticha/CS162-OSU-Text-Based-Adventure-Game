//
//  Dr_Seuss.cpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#include "Dr_Seuss.hpp"

const std::string Seuss::Items[4] = {"Truffla-tree tuff", "Thneed", "15¢", "Yellow Sphere of Light"};
const std::string Seuss::Characters[2] = {"Humming Fish", "Once-ler"};

Seuss::Seuss()
{
}

int Seuss::Special(char name[], char drink[], std::string player_name, Player* player)
{
    Menu menu;
    int seuss_choice;
    menu.Dr_Seuss_menu();
    
    do {
        menu.Dr_Seuss_actions_menu();
        std::cin >>seuss_choice;
        
        switch (seuss_choice) {
            case 1:
                std::cout <<"You approach a yellow Truffla-Tree and pick of it's tuff!" <<std::endl;
                if (player->check_backpack_size() != 5)
                {
                    player->input_item(Items[0]);
                }
                else
                {
                    std::cout <<"Cannot add " <<Items[0] <<" because backpack is full!" <<std::endl;
                    std::cout <<"Remove an Item:" <<std::endl;
                    player->display_backpack_content();
                    int remove_item;
                    std::cin >> remove_item;
                    player->remove_item(player->get_item(remove_item));
                    player->input_item(Items[0]);
                }
                break;
            case 2:
                menu.Humming_Fish_menu();
                int fish_choice;
                std::cin >> fish_choice;
                
                if (fish_choice == 1)
                {
                    if (player->check_item_available(Items[1]) == true)
                    {
                        std::cout <<"You: I have a Thneed to sell! I'll sell it to you for 15¢!" <<std::endl;
                        std::cout <<"Humming Fish: You have a deal!" <<std::endl;
                        player->remove_item(Items[1]);
                        std::cout <<"You have given the Thneed you made to the Humming Fish." <<std::endl;
                        player->input_item(Items[2]);
                        player->display_backpack_content();
                    }
                    else
                    {
                        std::cout <<"You do not have a Thneed to sell in your backpack!" <<std::endl;
                    }
                    
                }
                else if (fish_choice == 2)
                {
                    if (player->check_item_available(Items[0]) == true)
                    {
                        std::cout <<"You use the Truffla-Tree Tuff to make a soft, versatile Thneed!" <<std::endl;
                        player->remove_item(Items[0]);
                        std::cout <<"You have used the Truffla-Tree Tuff you made to make a Thneed." <<std::endl;
                        player->input_item(Items[1]);
                        player->display_backpack_content();
                    }
                    else
                    {
                        std::cout <<"You do not have Truffla-Tree Tuff in your backpack to make a Thneed!" <<std::endl;
                    }
                }
                else
                {
                    std::cout <<"Humming Fish: Without a Thneed, I'm still in need!" <<std::endl;
                }
                break;
            case 3:
                menu.Once_ler_menu();
                int once;
                std::cin >> once;
                
                if (once == 1)
                {
                    if (player->check_item_available(Items[2]) == true)
                    {
                        std::cout <<"You give the Once-ler 15¢!" <<std::endl;
                        player->remove_item(Items[2]);
                        std::cout <<"Once-ler: Huh, I guess you're not so bad after all." <<std::endl;
                        std::cout <<"\t I promised you your wish, so here it is." <<std::endl;
                        std::cout <<"The Once-ler hands you a Yellow Sphere of Light." <<std::endl;
                        player->input_item(Items[3]);
                        player->display_backpack_content();
                    }
                    else
                    {
                        std::cout <<"Once-ler: Come back when you have 15¢, no more and no less!" <<std::endl <<std::endl;
                    }
                }
                else
                {
                    std::cout <<"Once-ler: Come back when you have 15¢, no more and no less!" <<std::endl <<std::endl;
                }
                break;
            default:
                break;
        }
    } while (player->check_item_available(Items[3]) == false);
    
    return 0;
}

