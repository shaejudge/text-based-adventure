#ifndef ZSTORYHEADER_H_INCLUDED
#define ZSTORYHEADER_H_INCLUDED

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void storyFunction();
char title[34] = "***********DEAD MANSION**********";   //cstyle string
string name;
char enter;

string choice;
string inspect;
int my_health = 100;
int my_attack = 5;

    //the chars are for Y/N if statements
    //the ints set to zero are mostly toggle switches
        //when the user picks up an item, it adds +1 to the item here
            //so an if statement can decide if the user has a certain item
int gun = 0;
int cleaver = 0;
int key = 0;
int musicbox = 0;
char box;
char pull;
int power = 0;
char pill;
int pillgone = 0;
int wrench = 0; //change back to zero!!!
int wrenchgone = 0;
int fuse_open = 0;
char fuse_on;
int run = 0;
char beans;
int beansgone;

//choice for which Zombie to fight
int zbattle = 0;

char restart;

//string Walker, Spitter, Big, Runner;





#endif // ZSTORYHEADER_H_INCLUDED
