//
//  Menu.cpp
//  Final_Project
//
//  Created by Mariam Ben-Neticha on 12/4/15.
//  Copyright © 2015 Mariam Ben-Neticha. All rights reserved.
//

#include "Menu.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>

int Menu::game_menu()
{
    int menu;
    std::cout << "Please choose what you would like to do." <<std::endl;
    std::cout << "1: Start the game. (Game has a timer for 15 minutes!)" <<std::endl;
    std::cout << "2: Exit." <<std::endl;
    std::cin >> menu;
    return menu;
}



void Menu::coffee_menu(char name[], char drink[])
{
    std::cout <<"☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎" <<std::endl;
    std::cout <<"☕︎                                " <<name <<"                              ☕︎" <<std::endl;
    std::cout <<"☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎☕︎" <<std::endl <<std::endl;
    
    std::cout <<"You have walked into " <<name <<" to get a " <<drink <<" on a cold winter day." <<std::endl;
    std::cout <<"You see a $20 bill on the ground. You choose to..." <<std::endl;
    std::cout <<"\t 1: Pick up the $20 bill." <<std::endl;
    std::cout <<"\t 2: Ignore the $20 bill and order your " <<drink <<"." <<std::endl;
}
void Menu::pick_up_20()
{
    std::cout <<"You bend down to pick up the $20 bill. As soon as you lift it" <<std::endl;
    std::cout <<"off the ground, you see the ground you're standing on shift." <<std::endl;
    std::cout <<"Suddenly the floor under your feet disappears and you're sliding" <<std::endl;
    std::cout <<"downwards at a frightening speed!" <<std::endl;
}
void Menu::order_drink( char drink[])
{
    std::cout <<"You ignore the $20 bill on the floor and move toward the Barista at the counter." <<std::endl;
    std::cout <<"You: I would like a " <<drink <<", please." <<std::endl;
    std::cout <<"Barista: Anything else?" <<std::endl;
    std::cout <<"You shake your head 'no' while you pull your wallet out of your pocket." <<std::endl;
    std::cout <<"Barista: That'll be $2.49. " <<std::endl;
    std::cout <<"You pay three dollars. The Barista hands you your " <<drink <<std::endl;
    std::cout <<"and change, but a penny falls to the floor. You..." <<std::endl;
    std::cout <<"\t 1: Pick up the 1¢." <<std::endl;
    std::cout <<"\t 2: Take a sip of your deliciously warm " <<drink <<"." <<std::endl;
}
void Menu::pick_up_penny()
{
    std::cout <<"You bend down to pick up the useless penny. As soon as you lift it" <<std::endl;
    std::cout <<"off the ground, you see the ground you're standing on shift." <<std::endl;
    std::cout <<"Suddenly the floor under your feet disappears and you're sliding" <<std::endl;
    std::cout <<"downwards at a frightening speed!" <<std::endl;
}
void Menu::take_sip(char drink[])
{
    std::cout <<"You lift the delightful " <<drink <<" to your mouth and take an indulgent sip." <<std::endl;
    std::cout <<"A stranger walking past you in ridiculously mismatched clothes bumps" <<std::endl;
    std::cout <<"your shoulder and you drop your cup! Suddenly the floor "<<std::endl;
    std::cout <<"under your feet disappears and you're sliding downwards at a frightening speed!" <<std::endl;
}



void Menu::center_menu(std::string player_name)
{
    std::cout <<"⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇" <<std::endl;
    std::cout <<"⚇                                  Center                                    ⚉" <<std::endl;
    std::cout <<"⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇" <<std::endl <<std::endl;
    
    std::cout <<"You fall into a round room with four doors and a statue. There is a bright" <<std::endl;
    std::cout <<"light shining over the statue that sheds some light onto the remainder of the room." <<std::endl;
    std::cout <<"You hear a loud rumbling  coming from the statue and, in a moment, it's speaking." <<std::endl;
    std::cout <<"Oracle: " <<player_name <<", you've had quite some luck today!" <<std::endl;
    std::cout <<"\t Now, your intellect shall be tested. In order to return to" <<std::endl;
    std::cout <<"\t the outside world, you must solve riddles and puzzles. These" <<std::endl;
    std::cout <<"\t will lead you to the hidden spheres in every room. Collect 4" <<std::endl;
    std::cout <<"\t spheres and return them to me to attain your freedom." <<std::endl<<std::endl;
    std::cout <<"You will use your backpack to store your items." <<std::endl;
    std::cout <<"You can only store 5 items in your backpack at one time." <<std::endl<<std::endl;
}
void Menu::Oracle_riddle_star()
{
    std::cout <<"Oracle: Your first riddle will give you access to one of these 4 doors." <<std::endl;
    std::cout <<std::setw(60) <<"I am everywhere." <<std::endl;
    std::cout <<std::setw(60) <<"Nothing can compare." <<std::endl;
    std::cout <<std::setw(60) <<"Run and hide and I will still be there." <<std::endl;
    std::cout <<std::setw(60) <<"Because everything is mine to share." <<std::endl;
    std::cout <<std::setw(60) <<"No need to seek me out." <<std::endl;
    std::cout <<std::setw(60) <<"Though you may just run out." <<std::endl;
    std::cout <<std::setw(60) <<"What am I?" <<std::endl <<std::endl;
    std::cout <<"Select your answer:" <<std::endl;
    std::cout <<"\t 1: Time" <<std::endl;
    std::cout <<"\t 2: Space" <<std::endl;
    std::cout <<"\t 3: Air" <<std::endl;
    std::cout <<"\t 4: Water" <<std::endl<<std::endl;
}
void Menu::Oracle_riddle_harry()
{
    std::cout <<"Oracle: Your second riddle will give you access to a new door." <<std::endl;
    std::cout <<std::setw(60) <<"Faster than a twitch!" <<std::endl;
    std::cout <<std::setw(60) <<"Fly with me to the Pitch!" <<std::endl;
    std::cout <<std::setw(60) <<"With a seeker, a keeper," <<std::endl;
    std::cout <<std::setw(60) <<"Or a chaser, a beater," <<std::endl;
    std::cout <<std::setw(60) <<"wizard or witch," <<std::endl;
    std::cout <<std::setw(60) <<"I play a mean game of Quidditch." <<std::endl;
    std::cout <<std::setw(60) <<"What am I?" <<std::endl <<std::endl;
    std::cout <<"Select your answer:" <<std::endl;
    std::cout <<"\t 1: Baseball" <<std::endl;
    std::cout <<"\t 2: Hummingbird" <<std::endl;
    std::cout <<"\t 3: Broom" <<std::endl;
    std::cout <<"\t 4: Airplane" <<std::endl<<std::endl;
}
void Menu::Oracle_riddle_seuss()
{
    std::cout <<"Oracle: Your third riddle will give you access to a new door." <<std::endl;
    std::cout <<std::setw(60) <<"You're wrong as the deuce" <<std::endl;
    std::cout <<std::setw(60) <<"And you shouldn't rejoice" <<std::endl;
    std::cout <<std::setw(60) <<"If you're calling him Seuss" <<std::endl;
    std::cout <<std::setw(60) <<"He pronounces it Soice!" <<std::endl;
    std::cout <<std::setw(60) <<"What does my real name rhyme with?" <<std::endl;
    std::cout <<"Select your answer:" <<std::endl;
    std::cout <<"\t 1: Couch" <<std::endl;
    std::cout <<"\t 2: Truce" <<std::endl;
    std::cout <<"\t 3: Voice" <<std::endl;
    std::cout <<"\t 4: Cruise" <<std::endl<<std::endl;
}
void Menu::Oracle_riddle_blank()
{
    std::cout <<"Oracle: Your final riddle will give you access to the last door." <<std::endl;
    std::cout <<std::setw(60) <<"I'm more powerful than God." <<std::endl;
    std::cout <<std::setw(60) <<"I'm more evil than the Devil." <<std::endl;
    std::cout <<std::setw(60) <<"The poor have me." <<std::endl;
    std::cout <<std::setw(60) <<"The rich need me." <<std::endl;
    std::cout <<std::setw(60) <<"If you eat me, you will die." <<std::endl;
    std::cout <<std::setw(60) <<"What am I?" <<std::endl <<std::endl;
    std::cout <<"Select your answer:" <<std::endl;
    std::cout <<"\t 1: Money" <<std::endl;
    std::cout <<"\t 2: Food" <<std::endl;
    std::cout <<"\t 3: Air" <<std::endl;
    std::cout <<"\t 4: Nothing" <<std::endl<<std::endl;
}
void Menu::Oracle_give_sphere()
{
    std::cout <<"⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇" <<std::endl;
    std::cout <<"⚇                                  Center                                    ⚉" <<std::endl;
    std::cout <<"⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇" <<std::endl <<std::endl;
    
    std::cout <<"Oracle: You have emerged from the room. Hand me the sphere you have found!" <<std::endl <<std::endl;
    
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1: Give Oracle the sphere in your backpack." <<std::endl;
}
void Menu::Oracle_end_menu(std::string player_name)
{
    std::cout <<"⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇" <<std::endl;
    std::cout <<"⚇                                  Center                                    ⚉" <<std::endl;
    std::cout <<"⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇⚉⚇" <<std::endl <<std::endl;
    
    std::cout <<"Oracle: " <<player_name <<", you have returned to me the four spheres." <<std::endl;
    std::cout <<"\t Your intellect has passed the tests. There remains one more choice" <<std::endl;
    std::cout <<"\t to be made. Select the blue pill to remember your journey. Select" <<std::endl;
    std::cout <<"\t the red pill to forget. Choose and be on your way! The door to" <<std::endl;
    std::cout <<"\t your freedom will disappear in 5 seconds." <<std::endl<<std::endl;
    std::cout <<"Two pillars appear, one on your left, the other on your right." <<std::endl;
    std::cout <<"Behind you is your door to the outside." <<std::endl <<std::endl;
    std::cout <<"What is your choice?" <<std::endl;
    std::cout <<"\t 1: Take the blue pill and remember." <<std::endl;
    std::cout <<"\t 2: Take the red pill and forget." <<std::endl;
}



void Menu::Star_Wars_menu()
{
    std::cout <<"✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵" <<std::endl;
    std::cout <<"✵                                  Star Wars                               ✵" <<std::endl;
    std::cout <<"✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵✵" <<std::endl <<std::endl;
    
    std::cout <<"You walk through the door that has opened to you. As soon as the door behind" <<std::endl;
    std::cout <<"you clicks shut, your feet float off the ground. You're floating through the air!" <<std::endl;
    std::cout <<"You look around and realize that this room has no gravity! You watch as a" <<std::endl;
    std::cout <<"lightsaber passes by your arm. Further down the room, Yoda is completely still" <<std::endl;
    std::cout <<"in mid-air, meditating. You see the Sith crouched against one of the walls," <<std::endl;
    std::cout <<"secured by a loose rope. And on the floor of the room, R2-D2's 'beep-bop-boop'" <<std::endl;
    std::cout <<"can be heard as he zips along. Somehow, the lack of gravity does not impair R2-D2." <<std::endl <<std::endl;
}
void Menu::Star_Wars_actions_menu()
{
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Pick-up Lightsaber and add to backpack!" <<std::endl;
    std::cout <<"\t 2:Interact with R2D2." <<std::endl;
    std::cout <<"\t 3:Interact with Yoda." <<std::endl;
    std::cout <<"\t 4:Interact with Sith." <<std::endl;
}/*
void Menu::Star_Wars_disp_actions(int user_choice)
{
    do {
        std::cout <<"What action would you like to take?" <<std::endl;
        std::cout <<"\t 1:Pick-up Lightsaber and add to backpack!" <<std::endl;
        std::cout <<"\t 2:Interact with R2-D2." <<std::endl;
        std::cout <<"\t 3:Interact with Yoda." <<std::endl;
        std::cout <<"\t 4:Interact with Sith." <<std::endl;
    } while (user_choice != 1);
    if (user_choice == 1)
    {
        std::cout <<"What action would you like to take?" <<std::endl;
        std::cout <<"\t 1:Pick-up Lightsaber. (unavailable: item can only be picked up once)" <<std::endl;
        std::cout <<"\t 2:Interact with R2-D2." <<std::endl;
        std::cout <<"\t 3:Interact with Yoda." <<std::endl;
        std::cout <<"\t 4:Interact with Sith." <<std::endl;
    }
}*/
void Menu::R2D2_menu(std::string R2D2)
{
    std::cout <<"You push yourself toward R2-D2." <<std::endl;
    std::cout <<"You: Hi, R2. I'm looking for some kind of Sphere. Would you know anything about that?" <<std::endl;
    std::cout <<"[R2-D2 beeps something about a Sphere]" <<std::endl;
    std::cout <<"[R2-D2 pulls You toward a framed Star Wars poster on one of the walls.]" <<std::endl <<std::endl;
    
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Move the Star Wars poster." <<std::endl;
    std::cout <<"\t 2:Inspect the Star Wars poster." <<std::endl;
    std::cout <<"\t 3:Return to interact with a different character." <<std::endl;
}
void Menu::Yoda_menu(std::string Yoda)
{
    std::cout <<Yoda <<": " <<std::endl;
    std::cout <<"\t \t The first number, it is:" <<std::endl;
    std::cout <<"\t \t At this age, a legal adult you are." <<std::endl;
    std::cout <<"\t \t To this number, add one." <<std::endl;
    std::cout <<"\t \t The first number, this is!" <<std::endl <<std::endl;
    
    std::cout <<"\t \t The second number, it is:" <<std::endl;
    std::cout <<"\t \t Of a century, only three-fourths." <<std::endl;
    std::cout <<"\t \t To this number, add two." <<std::endl;
    std::cout <<"\t \t The second number, this is!" <<std::endl <<std::endl;
    
    std::cout <<"The code you seek, what is, hmmm?" <<std::endl;
    std::cout <<"\t 1: 18-75" <<std::endl;
    std::cout <<"\t 2: 19-77" <<std::endl;
    std::cout <<"\t 3: 21-74" <<std::endl;
    std::cout <<"\t 4: 21-34" <<std::endl;
}
void Menu::Sith_menu(std::string Sith)
{
    std::cout <<"A strong pull brings your floating self down to the ground. Gravity is back!" <<std::endl <<std::endl;
    std::cout <<Sith <<": Mercy is for the weak!" <<std::endl <<std::endl;
    std::cout <<"Sith pulls out a lightsaber. When he activates it, two pulsing red sabers extend" <<std::endl;
    std::cout <<"from each end of the handle. You activate your lightsaber and one, long, blue saber" <<std::endl;
    std::cout <<"extends. You hold yours like a sword. Sith holds his like a long fighting stick." <<std::endl;
    std::cout <<"The battle commences and you realize you can't beat the Sith's speed. You dodge" <<std::endl;
    std::cout <<"and strike when you can, but the Sith is overpowering you." <<std::endl <<std::endl;
    
    std::cout <<"You realize that the Sith is still attached to the wall, a doing of his own to keep him stable" <<std::endl;
    std::cout <<"when there was no gravity. You find that you can turn the advantage back over to yourself." <<std::endl;
    std::cout <<"You continue dodging and deflecting attacks, but now, you're leading him away from his wall." <<std::endl;
    std::cout <<"At the moment when the Sith no longer has any slack and automatically turns to see what's" <<std::endl;
    std::cout <<"holding him back, you deliver a fatal blow. The Sith is terribly injured, though not dead." <<std::endl;
    std::cout <<"Sith will be able to heal and the two of you may face each other in battle once more." <<std::endl <<std::endl;
    
    std::cout <<"CONGRATULATIONS! You have beat the Sith!" <<std::endl <<std::endl;
}

void Menu::Harry_Potter_menu()
{
    std::cout <<"⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕" <<std::endl;
    std::cout <<"⚕                               Harry Potter                               ⚕" <<std::endl;
    std::cout <<"⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕⚕" <<std::endl <<std::endl;
    
    std::cout <<"You walk through the door that has opened to you. You're inside a library." <<std::endl;
    std::cout <<"But this library has owls flying through with pieces of mail, students waving" <<std::endl;
    std::cout <<"wands and ghosts floating along through walls and bookshelves." <<std::endl;
    std::cout <<"You see a large Portrait of a Fat Lady on one of the walls near you, a heavy book" <<std::endl;
    std::cout <<"encased in glass, and Hermione waving to you from a table stacked with books." <<std::endl;
    std::cout <<"A wand of your own has appeared in your hand." <<std::endl <<std::endl;
    
    std::cout <<"Hint: It is recommended to see Hermione first." <<std::endl <<std::endl;
}
void Menu::Harry_Potter_actions_menu()
{
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Interact with Hermione." <<std::endl;
    std::cout <<"\t 2:Interact with the Portrait." <<std::endl;
    std::cout <<"\t 3:Interact with the Book." <<std::endl;
}
void Menu::Portraits_menu()
{
    std::cout <<"You approach a portrait of a Fat Lady. She sees you coming and turns to face you." <<std::endl <<std::endl;
    std::cout <<"Fat Lady Portrait: Password?" <<std::endl <<std::endl;
    
    std::cout <<"Pick the correct password." <<std::endl;
    std::cout <<"\t 1:Flibbertigibbet." <<std::endl;
    std::cout <<"\t 2:Dilligrout." <<std::endl;
    std::cout <<"\t 3:Odsbodikins." <<std::endl;
    std::cout <<"\t 4:Balderdash." <<std::endl;
}
void Menu::Hermione_menu()
{
    std::cout <<"Hermione: Hello, there! I have a few hints for you. Here they are:" <<std::endl;
    std::cout <<"\t \t A wand can easily be the key to opening a box." <<std::endl;
    std::cout <<"\t \t The password is an excessively talkative person." <<std::endl;
    std::cout <<"Hermione: I hope that helps! Come back if you need to hear a hint again." <<std::endl;
    std::cout <<"Hermione smiles and waves before returning to pursue the shelves of the Library." <<std::endl <<std::endl;
}
void Menu::Book_menu()
{
    std::cout <<"As you approach the book encased in glass, it automatically flips open and lands on a page." <<std::endl <<std::endl;
    std::cout <<"   Accio:                              Alohamora:                               " <<std::endl;
    std::cout <<"   Summons an object to the caster.    Used to open and/or unlock doors.        " <<std::endl <<std::endl;
    std::cout <<"   Aparecium:                          Avada Kedavra:                           " <<std::endl;
    std::cout <<"   Makes invisible ink appear.         Causes instant, painless death to whomever the curse hits." <<std::endl <<std::endl;
    
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Store 'Accio' spell in backpack." <<std::endl;
    std::cout <<"\t 2:Store 'Alohamora' spell in backpack." <<std::endl;
    std::cout <<"\t 3:Store 'Aparecium' spell in backpack." <<std::endl;
    std::cout <<"\t 4:Store 'Avada Kedavra' spell in backpack." <<std::endl;
}
void Menu::Box_menu()
{
    std::cout <<"You approach the large box behind the Fat Lady's portrait." <<std::endl;
    std::cout <<"You try to lift the lid. It's locked." <<std::endl <<std::endl;
    
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Try the spell that is stored in your backpack." <<std::endl;
}



void Menu::Dr_Seuss_menu()
{
    std::cout <<"♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪" <<std::endl;
    std::cout <<"♪                                Dr. Suess                                 ♪" <<std::endl;
    std::cout <<"♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪" <<std::endl <<std::endl;
    
    std::cout <<"Through the door, you find yourself in a land full of colors and happy, singing" <<std::endl;
    std::cout <<"creatures! There are trees all around, but nothing like you've seen before." <<std::endl;
    std::cout <<"These trees are Truffla-Trees and have tuff instead of leaves. And they come in" <<std::endl;
    std::cout <<"colors of pink, yellow, and green! To the right, you see a glistening pond with" <<std::endl;
    std::cout <<"Humming Fish trilling out tunes. To the left, a grumpy, old thing they call the Once-ler." <<std::endl;
    std::cout <<"What a delightful place to be!" <<std::endl <<std::endl;
}
void Menu::Dr_Seuss_actions_menu()
{
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Pick a Truffla-Tree." <<std::endl;
    std::cout <<"\t 2:Interact with the Humming Fish." <<std::endl;
    std::cout <<"\t 3:Interact with the Once-ler." <<std::endl;
    
}
void Menu::Humming_Fish_menu()
{
    std::cout <<"You approach the Humming Fish." <<std::endl;
    std::cout <<"Humming Fish Singing:" <<std::endl;
    std::cout <<std::setw(60) <<"Everybody needs a Thneed!" <<std::endl;
    std::cout <<std::setw(60) <<"A fine thing that all the peopl need!" <<std::endl;
    std::cout <<std::setw(60) <<"Thneed is good, Thneed is great!" <<std::endl;
    std::cout <<std::setw(60) <<"Let's buy a thneed, hope we're not too late!" <<std::endl <<std::endl;
    
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Sell the Humming Fish a Thneed for 15¢." <<std::endl;
    std::cout <<"\t 2:Make a Thneed using Truffla-Tree Tuff you've collected." <<std::endl;
    std::cout <<"\t 3:Return and try to obtain a Thneed." <<std::endl;
}
void Menu::Once_ler_menu()
{
    std::cout <<"You approach the Once-ler." <<std::endl;
    std::cout <<"Once-ler:" <<std::endl;
    std::cout <<std::setw(60) <<"Hey, you there, young sir!" <<std::endl;
    std::cout <<std::setw(60) <<"You cannot pass!" <<std::endl;
    std::cout <<std::setw(60) <<"You must pay the Once-ler" <<std::endl;
    std::cout <<std::setw(60) <<"fifteen cents CASH!" <<std::endl;
    std::cout <<std::setw(60) <<"For if you do so," <<std::endl;
    std::cout <<std::setw(60) <<"You'll get your big wish" <<std::endl;
    std::cout <<std::setw(60) <<"But you must beware" <<std::endl;
    std::cout <<std::setw(60) <<"To make a very neat stitch." <<std::endl <<std::endl;
    
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Give the Once-ler 15¢." <<std::endl;
    std::cout <<"\t 2:Return and try to obtain 15¢." <<std::endl;
}



void Menu::Blank_menu()
{
    std::cout <<"??????????????????????????????????????????????????????????????????????????????" <<std::endl;
    std::cout <<"?                             _____________                                  ?" <<std::endl;
    std::cout <<"??????????????????????????????????????????????????????????????????????????????" <<std::endl <<std::endl;
    
    std::cout <<"You walk into a blank room. The only things you see are four columns that come" <<std::endl;
    std::cout <<"up to your waist. On each column is one item. They are: a Velociraptor talon, a" <<std::endl;
    std::cout <<"shiny red apple, a ring with elvish writing, and a glass slipper." <<std::endl <<std::endl;
    
    std::cout <<"What action would you like to take?" <<std::endl;
    std::cout <<"\t 1:Pick up the Raptor Talon." <<std::endl;
    std::cout <<"\t 2:Pick up the Red Apple." <<std::endl;
    std::cout <<"\t 3:Pick up the One Ring." <<std::endl;
    std::cout <<"\t 4:Pick up the Glass Shoe." <<std::endl;
}
void Menu::Jurassic_menu()
{
    std::cout <<"The four columns disappear, taking the Raptor Talon along. It is no longer in" <<std::endl;
    std::cout <<"your hand. Ian Malcolm appears before you." <<std::endl;
    std::cout <<"Ian Malcolm:" <<std::endl;
    std::cout <<"\t Welcome to a world where dinosaurs have been rediscovered!" <<std::endl;
    std::cout <<"\t To complete your journey, you must answer a final question." <<std::endl;
    std::cout <<"\t Which type of dinosaur is a frighteningly good, and terrifying, tracker?" <<std::endl <<std::endl;
    
    std::cout <<"Choose your answer" <<std::endl;
    std::cout <<"\t 1:T-Rex." <<std::endl;
    std::cout <<"\t 2:Pterosaurs." <<std::endl;
    std::cout <<"\t 3:Velociraptors." <<std::endl;
    std::cout <<"\t 4:Mosasaurus." <<std::endl;
}
void Menu::Snow_White_menu()
{
    std::cout <<"The four columns disappear, taking the Red Apple along. It is no longer in" <<std::endl;
    std::cout <<"your hand. Snow White appears before you." <<std::endl;
    std::cout <<"Snow White:" <<std::endl;
    std::cout <<"\t Welcome to a world of evil Queens, poisoned apples, and dwarf friends!" <<std::endl;
    std::cout <<"\t To complete your journey, you must answer a final question." <<std::endl;
    std::cout <<"\t What are the names of Snow White's seven dwarves?" <<std::endl <<std::endl;
    
    std::cout <<"Choose your answer" <<std::endl;
    std::cout <<"\t 1:Doc, Happy, Sleepy, Dopey, Grumpy, Bashful, Sneezy." <<std::endl;
    std::cout <<"\t 2:Angry, Happy, Sad, Sleepy, Shy, Captain, Conscious." <<std::endl;
    std::cout <<"\t 3:Doc, Dopey, Mindful, Grumpy, Quirkful, Happy, Dreamy." <<std::endl;
    std::cout <<"\t 4:Grumpy, Quirky, Sneezy, Dreamy, Happy, Doc, Dopey." <<std::endl;
}
void Menu::LOTR_menu()
{
    std::cout <<"The four columns disappear, taking the One Ring along. It is no longer in" <<std::endl;
    std::cout <<"your hand. Legolas appears before you." <<std::endl;
    std::cout <<"Legolas:" <<std::endl;
    std::cout <<"\t Welcome to Middle Earth. A world full of fantastic creatures." <<std::endl;
    std::cout <<"\t To complete your journey, you must answer a final question." <<std::endl;
    std::cout <<"\t How many rings were given to men, to elves, to dwarves?" <<std::endl <<std::endl;
    
    std::cout <<"Choose your answer" <<std::endl;
    std::cout <<"\t 1:Six, Three, None." <<std::endl;
    std::cout <<"\t 2:Five, Four, Three." <<std::endl;
    std::cout <<"\t 3:Nine, Three, Seven." <<std::endl;
    std::cout <<"\t 4:Seven, Two, Five." <<std::endl;
}
void Menu::Cinderella_menu()
{
    std::cout <<"The four columns disappear, taking the Glass Slipper along. It is no longer in" <<std::endl;
    std::cout <<"your hand. Cinderella appears before you." <<std::endl;
    std::cout <<"Cinderella:" <<std::endl;
    std::cout <<"\t Welcome to a world of fairy Godmothers, princes, and talking mice!" <<std::endl;
    std::cout <<"\t To complete your journey, you must answer a final question." <<std::endl;
    std::cout <<"\t What is the name of my Step-Sisters' cat?" <<std::endl <<std::endl;
    
    std::cout <<"Choose your answer" <<std::endl;
    std::cout <<"\t 1:Linus." <<std::endl;
    std::cout <<"\t 2:Satan." <<std::endl;
    std::cout <<"\t 3:Ludwig." <<std::endl;
    std::cout <<"\t 4:Lucifer." <<std::endl;
}



void Menu::Sphere_of_Light_menu()
{
    
}