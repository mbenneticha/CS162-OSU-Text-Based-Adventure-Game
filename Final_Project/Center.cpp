//
//  Center.cpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#include "Center.hpp"
const std::string Center::Spheres[4] = {"Blue Sphere of Light", "Red Sphere of Light", "Yellow Sphere of Light", "White Sphere of Light"};

Center::Center()
{
    //Oracle_container = {};
}

int Center::Special(char name[], char drink[], std::string player_name, Player* player)
{
    Menu menu;
    
    switch (Oracle_container.size())
    {
            int riddle;
            int choice;
        case 0:
            //interaction when first fall into center room
            menu.center_menu(player_name);
            
            riddle = 0;
            //first riddle -- Star Wars room entrance
            menu.Oracle_riddle_star();
            std::cin >> riddle;
            
            //if user answers riddle incorrectly
            if (riddle != 2)
            {
                int m = 3;
                do {
                    std::cout <<"The answer you have chosen is incorrect. Tries remaining: " <<m <<std::endl;
                    m--;
                    menu.Oracle_riddle_star();
                    std::cin >> riddle;
                } while (riddle != 2);
            }
            else
            {
                //user answers riddle correctly
                std::cout <<"One door opens with a creak and a vacuum like sound is hear within." <<std::endl;
                std::cout <<"You step inside..." <<std::endl;
            }
            break;
        case 1:
            //sphere given to oracle; remove from backpack.
            player->remove_item(Spheres[0]);
            player->display_backpack_content();
            
            riddle = 0;
            //second riddle -- Harry Potter room entrance
            menu.Oracle_riddle_harry();
            std::cin >> riddle;
            
            //if user answers riddle incorrectly
            if (riddle != 3)
            {
                int m = 3;
                do {
                    std::cout <<"The answer you have chosen is incorrect. Tries remaining: " <<m <<std::endl;
                    m--;
                    menu.Oracle_riddle_harry();
                    std::cin >> riddle;
                } while (riddle != 3);
            }
            else
            {
                //user answers riddle correctly
                std::cout <<"One door opens with a creak and the sound of chatter is heard." <<std::endl;
                std::cout <<"You step inside..." <<std::endl;
            }
            break;
            
        case 2:
            /*//interaction give sphere to oracle and new riddle
            choice = 0;
            menu.Oracle_give_sphere();
            std::cin >> choice;
            
            if (choice == 1)
            {
                //return HP room Sphere
                Oracle_container.push_back(Spheres[1]);
            }
            */
            riddle = 0;
            //third riddle -- Dr.Seuss room entrance
            menu.Oracle_riddle_seuss();
            std::cin >> riddle;
            
            //if user answers riddle incorrectly
            if (riddle != 3)
            {
                int m = 3;
                do
                {
                    std::cout <<"The answer you have chosen is incorrect. Tries remaining: " <<m <<std::endl;
                    m--;
                    menu.Oracle_riddle_seuss();
                    std::cin >> riddle;
                } while (riddle != 3);
            }
            else
            {
                //user answers riddle correctly
                std::cout <<"One door opens with a creak and the sound of humming is heard." <<std::endl;
                std::cout <<"You step inside..." <<std::endl;
            }
            break;
        case 3:
            /*//interaction give sphere to oracle and new riddle
            choice = 0;
            menu.Oracle_give_sphere();
            std::cin >> choice;
            
            if (choice == 1)
            {
                //return Seuss room Sphere
                Oracle_container.push_back(Spheres[2]);
            }*/
            
            riddle = 0;
            //fourth riddle -- Blank room entrance
            menu.Oracle_riddle_blank();
            std::cin >> riddle;
            
            //if user answers riddle incorrectly
            if (riddle != 4)
            {
                int m = 3;
                do {
                    std::cout <<"The answer you have chosen is incorrect. Tries remaining: " <<m <<std::endl;
                    m--;
                    menu.Oracle_riddle_blank();
                    std::cin >> riddle;
                } while (riddle != 4);
            }
            else
            {
                //user answers riddle correctly
                std::cout <<"One door opens with a creak and nothing is heard." <<std::endl;
                std::cout <<"You step inside..." <<std::endl;
            }
            break;
        case 4:
            menu.Oracle_end_menu(player_name);
            int pill_choice;
            std::cin >> pill_choice;
            
            if (pill_choice == 1)
            {
                std::cout <<"You swallow the blue pill. The Oracle laughs menacingly, and you notice." <<std::endl;
                std::cout <<"he's too absorbed in his treasures to pay you anymore attention." <<std::endl;
                std::cout <<"You walk to the door leading outside and can't help but think" <<std::endl;
                std::cout <<"\t \t \t 'I could really go for a " <<drink <<" right now.'" <<std::endl <<std::endl;
                
                std::cout <<"•••••••••••••••••••••••••••••••••••THE ✌︎ END•••••••••••••••••••••••••••••••••••" <<std::endl;
                
            }
            else if (pill_choice == 2)
            {
                std::cout <<"You swallow the red pill. Slowly, everyting in the room disappears." <<std::endl;
                std::cout <<"You see a bright, open door and dazedly walk towards it. No thoughts" <<std::endl;
                std::cout <<"run through your mind. You hear car horns honking and birds chirping." <<std::endl <<std::endl;
                
                std::cout <<"•••••••••••••••••••••••••••••••••••THE ✌︎ END•••••••••••••••••••••••••••••••••••" <<std::endl;
            }
            break;
        default:
            break;
    }
    
    return 0;
}


void Center::input_sphere(std::string sphere)
{
    Oracle_container.push_back(sphere);
}


void Center::display_Oracle_container()
{
    std::cout <<"Oracle has the following Spheres of Light:" <<std::endl;
    for (int i = 0; i < Oracle_container.size(); i++)
    {
        int n = i + 1;
        std::cout <<n <<": " <<Oracle_container.at(i) <<std::endl;
    }
}
