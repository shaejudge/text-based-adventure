#include "zPassphraseFunction.cpp"
#include "zStoryHeader.h"

void storyFunction()
{   while(true)
    {
        cout << title << endl;
        cout << "[Enter]" << endl;
        cout << string(21, '\n' );
        cin.ignore();
        cout << string(21, '\n' );
        cout << "Start? (Y/N)" << endl;
        cout << string(22, '\n' );
        cin >> enter;
        cout << endl;

        if(enter == 'Y' || enter == 'y')
        {   cout << "Name?" << endl;
            cout << string(22, '\n' );
            cin >> name;
            cout << "Player Name: " << name << endl;
            cout << "\nInside this mansion, there are 4 types of zombies:\n" << endl;
            cout << "Walkers: health 20, \n         "
                 << "max base damage 10, \n         "
                 << "10% of biting, causing max 10 damage\n" << endl;
            cout << "Spitters: health 30, \n          "
                 << "max base damage 5, \n          "
                 << "50% chance to projectile-vomit max 15 acid damage\n" << endl;
            cout << "Runners: health 30, \n         "
                 << "max base damage 8, \n         "
                 << "100% chance to double-attack\n" << endl;
            cout << "Bigs: health 70, \n      "
                 << "max base damage 20, \n      "
                 << "33% chance to charge attack max 20 points" << endl << endl;

            cout << "*There is a 33% chance of success when "
                 << "trying to run from zombies.*" << endl;

            cout << "I might want to remember all this." << endl;
            cout << "[Enter] the mansion." << endl;
            cin.ignore();
            cin.get();


            //c.choiceFunction();   //Figure out how to pass secret and guess back here so we can decide if the player keeps going or exits!!

            cout << name << "     Health: "
            << my_health << "     Attack: "
            << my_attack << endl << endl;
            cout << "The door has shut behind me.\n" << endl;
            cout << "I am in a large main room with several doors.\n" << endl;
            cout << "[Enter] to continue." << endl;
            cout << string(16, '\n' );
            cin.ignore();

            //In some kind of loop
            while(my_health > 0)
            {   cout << name << "     Health: "
                << my_health << "     Attack: "
                << my_attack << endl << endl;

                cout << "Where should I go?" << endl;
                cout << "Kitchen     Bathroom     Basement     "
                     << "Bedroom     Front-door     Garage" << endl;
                cout << string(19, '\n' );

                cin >> choice;
                //if kitchen
                if(choice == "Kitchen" || choice == "kitchen")
                {   cout << name << "     Health: "
                         << my_health << "     Attack: "
                         << my_attack << endl << endl;
                    while(true)
                    {   cout << name << "     Health: "
                        << my_health << "     Attack: "
                        << my_attack << endl << endl;
                        cout << "I am in the kitchen." << endl;
                        cout << "Inspect: \nWalls \nSink \nRefrigerator \n"
                             << "Stove \nOven \nCabinets \nExit" <<endl;
                        cout << string(12, '\n' );
                        cin >> inspect;
                        if(inspect == "Walls" || inspect == "walls")
                        {   cout << "A message on the wall written in blood.\n"
                                 << "It reads: 'ONLY ONE WAY TO KILL THEM!!1!'."
                                 << endl;
                            cout << string(21, '\n' );
                                 cin.ignore();
                                 cin.get();  //MAKE SURE THIS WORKS!!!
                        }
                        if(inspect == "Sink" || inspect == "sink")
                        {   while(true)
                            {   cleaver = cleaver + 1;
                                if(cleaver == 1)
                                {   cout << "I find a bloody meat cleaver. "
                                         << "[Attack 10]\n"
                                         << "I'll take this." << endl;
                                         //player keeps highest attack strength
                                    if(my_attack < 10){my_attack = 10;}
                                    cout << string(21, '\n' );
                                    cin.ignore();
                                    cin.get();
                                }
                                else
                                {   cout << "A very bloody sink." << endl;
                                    cout << string(22, '\n' );
                                    cin.ignore();
                                    cin.get();
                                }
                                break;
                            }
                        }

                        if(inspect == "Refrigerator" || inspect == "refrigerator")
                        {   cout << "It smells really bad." << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Oven" || inspect == "oven")
                        {   cout << "There are some bread crumbs and a moldy apple"
                                 << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Stove" || inspect == "stove")
                        {   if(beansgone == 1)
                            {   cout << "An empty can of beans" << endl;
                                cout << string(22, '\n' );
                                cin.ignore();
                                cin.get();
                            }

                            if(beansgone == 0)
                            {   cout << "A can of beans with a pop top." << endl;
                            while(true)
                            {
                            cout << "Should I eat it? (Y/N)" << endl;
                            cout << string(21, '\n' );
                            cin >> beans;
                                if(beans == 'Y' || beans == 'y')
                                {   beansgone = beansgone + 1;
                                    my_health = my_health + 50;
                                    cout << "Tasty! [Health + 50]\n";
                                    cout << string(22, '\n' );
                                    cin.ignore();
                                    cin.get();
                                    break;
                                }
                                if(beans == 'N' || beans == 'n')
                                {   cout << "Nah, I don't need it."
                                        << endl;
                                        cout << string(22, '\n' );
                                    cin.ignore();
                                    cin.get();
                                    break;
                                }
                                else{ cout << "[Enter]" << endl;}
                            }
                            }
                        }
                        if(inspect == "Cabinets" || inspect == "cabinets")
                        {   cout << "A note that reads: 'Alone I Maintain'\n";
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Exit" || inspect == "exit")
                        {   cout << "I'm leaving the kitchen." << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                            battleChooser();
                            break;
                        }

                        else
                        {   cout << "Not an option." << endl;
                        }
                    }
                    //cin.ignore();

                }
                    //if bathroom
                if(choice == "Bathroom" || choice == "bathroom")
                {   while(true)
                    {   cout << name << "     Health: "
                        << my_health << "     Attack: "
                        << my_attack << endl << endl;
                        cout << "I am in the bathroom." << endl;
                        cout << "Inspect: \nBathtub \nWalls \nFloor-cabinet \n"
                             << "Sink \nDrawers \nExit" <<endl;
                        cout << string(13, '\n' );
                        cin >> inspect;

                        if(inspect == "Walls" || inspect == "walls")
                        {   cout << "Painted pink. How classy.\n"
                                 << "...And the number 2 painted with blood."
                                 << " Gross."
                                 << endl;
                            cout << string(21, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Sink" || inspect == "sink")
                        {   if(pillgone == 0)
                            {   cout << "A bottle of unmarked pills" << endl;
                            while(true)
                            {
                            cout << "Should I take them? (Y/N)" << endl;
                            cout << string(21, '\n' );
                            cin >> pill;
                                if(pill == 'Y' || pill == 'y')
                                {   pillgone = pillgone + 1;
                                    my_health = my_health + 50;
                                    cout << ". . ." << endl;
                                    cout << string(22, '\n' );
                                    cin.ignore();
                                    cin.get();
                                    cout << string(9, '\n' );
                                    cout << ". . ." << endl;
                                    cout << string(11, '\n' );
                                    cin.ignore();
                                    //cin.get();
                                    cout << "...I feel okay. Actually, "
                                        << "I feel great! [Health + 50]\n";
                                    cout << string(22, '\n' );
                                    cin.ignore();
                                    //cin.get();
                                    break;
                                }
                                if(pill == 'N' || pill == 'n')
                                {   cout << "Curiosity killed the cat. \n"
                                        << "And probably whoever was "
                                        << "here before me. \nSo let's not."
                                        << endl;
                                        cout << string(20, '\n' );
                                    cin.ignore();
                                    cin.get();
                                    break;
                                }
                                else{ cout << "[Enter]" << endl;}
                            }

                            }
                            else{cout << "An empty sink" << endl;
                                 cout << string(22, '\n' );
                                 cin.ignore();
                                 cin.get();
                                }

                        }
                        if(inspect == "Floor-cabinet" || inspect == "floor-cabinet")
                        {   if(wrenchgone == 1)
                            {   cout << "Nothing here" << endl;
                                cout << string(22, '\n' );
                            }
                            if(wrenchgone == 0)
                            {   cout << "I found a wrench. [Attack 8]\n"
                                     << "I'll take this" << endl;
                                if(my_attack < 10){my_attack = 8;}
                                wrenchgone = wrenchgone + 1;
                                wrench = wrench + 1;
                                cout << string(21, '\n' );
                            }
                                cin.ignore();
                                cin.get();
                        }
                        if(inspect == "Bathtub" || inspect == "bathtub")
                        {   cout << "A rubber ducky floating in blood." << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Drawers" || inspect == "drawers")
                        {   cout << "A note. It reads: 'Falling On Roses'" << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Exit" || inspect == "exit")
                        {   cout << "I'm leaving the bathroom." << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                            battleChooser();
                            break;
                        }

                        else
                        {   cout << "Not an option." << endl;
                        }
                    }//end while
                }//end if bathroom

                    //if bedroom
                if(choice == "Bedroom" || choice == "bedroom")
                {   while(true)
                    {   cout << name << "     Health: "
                        << my_health << "     Attack: "
                        << my_attack << endl << endl;
                        cout << "I am in the bedroom." << endl;
                        cout << "Inspect: \nVanity \nDrawers \nWalls \n"
                             << "Bed \nExit" <<endl;
                        cout << string(14, '\n' );
                        cin >> inspect;

                        if(inspect == "Bed" || inspect == "bed")
                        {    while(true)
                            {   gun = gun + 1;
                                if(gun == 1)
                                {   cout << "A huge bed. Definitely bigger "
                                 << "than a standard King bed.\n"
                                 << "There's a handgun under the pillow!. [Attack 30]."
                                 << "\nI'll take this\n";
                                        //player keeps highest attack weapon
                                    if(my_attack < 15){my_attack = 15;}
                                    cout << string(21, '\n' );
                                    cin.ignore();
                                    cin.get();
                                }
                                else
                                {   cout << "The gun is gone, and nothing is "
                                         << "left." << endl;
                                    cout << string(22, '\n' );
                                    cin.ignore();
                                    cin.get();
                                }
                                break;
                            }
                        }

                        if(inspect == "Drawers" || inspect == "drawers")
                        {   while(true)
                            {
                            cout << "The first two are empty. "
                                 << "The third feels stuck.\n"
                                 << "Pull harder? (Y/N)" << endl;
                            cout << string(21, '\n' );
                            cin >> pull;
                            if(pull == 'Y' || pull == 'y')
                            {   cout << "**BOOM**CRACKLE**POP**" << endl;
                                cout << "Firecrackers! It's a trap! "
                                     << "[Health - 10]" << endl;
                                my_health = my_health - 10;
                                cout << string(21, '\n' );
                                cin.ignore();
                                cin.get();
                                battleChooser();
                                break;
                            }
                            if(pull == 'N' || pull == 'n')
                            {   cout << "Right, could be a trap." << endl;
                                cout << string(22, '\n' );
                                cin.ignore();
                                cin.get();
                                break;
                            }
                            //cin.ignore();
                            //cin.get();
                            }
                        }

                        if(inspect == "Walls" || inspect == "walls")
                        {   char box;
                            cout << "There's a torn piece of paper.\n"
                                 << "It reads: 'how many notes can you-'\n"
                                 << "The rest is torn off...How many "
                                 << "notes? Hmm." << endl;
                            cout << string(21, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Vanity" || inspect == "vanity")
                        {   //while(true)
                            //{
                            cout << "There's a fairly large music box.\n"
                                 << "Open it? (Y/N)" << endl;
                            cout << string(21, '\n' );
                            cin >> box;
                            if(box == 'Y' || box == 'y')
                            {
                                if(musicbox == 1)
                                {   cout << "It starts playing music, but "
                                         << "stops after three very eerie notes.\n"
                                         << "There's a envelope inside." << endl;
                                    cout << "Inside it is a note.\n"
                                         << "The note reads: 'Tie. Hang. End.'\n"
                                         << endl;
                                    cout << string(18, '\n' );
                                    //break;
                                }

                                if(musicbox == 0)
                                {   cout << "It starts playing music, but "
                                         << "stops after three very eerie notes.\n";
                                    cout << "There's a envelope inside." << endl;
                                    cout << "Inside it is a key and a note.\n"
                                         << "I'm keeping the key.\n"
                                         << "The note reads: 'Tie. Hang. End'.\n"
                                         << endl;
                                         cout << string(17, '\n' );
                                         musicbox = musicbox + 1;
                                         key = 1;
                                         //break;
                                }

                                cin.ignore();
                                cin.get();
                                //break;
                            }

                            if(box == 'N' || box == 'n')
                            {   cout << "Right, could be a trap." << endl;
                                cout << string(22, '\n' );
                                cin.ignore();
                                cin.get();
                                //break;
                            }
                            else{cout << "Nope." << endl;}
                            //}
                            //cin.get();
                        }

                        if(inspect == "Exit" || inspect == "exit")
                        {   cout << "Leaving the bedroom." << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                            battleChooser();
                            break;
                        }

                        else
                        {   cout << "Not an option." << endl;
                        }

                    }//end while loop
                }//end bedroom if

                    //if basement
                if(choice == "Basement" || choice == "basement")
                {   cout << name << "     Health: "
                         << my_health << "     Attack: "
                         << my_attack << endl << endl;
                    while(true)
                    {   cout << name << "     Health: "
                        << my_health << "     Attack: "
                        << my_attack << endl << endl;
                        cout << "I am in the basement." << endl;
                        cout << "Inspect: \nWasher \nDryer \nChest \n"
                             << "Walls \nFreezer \nExit" <<endl;
                        cout << string(13, '\n' );
                        cin >> inspect;

                        if(inspect == "Washer" || inspect == "washer")
                        {   cout << "A note. It reads: Higher"
                                 << " Energy And Dead " << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Dryer" || inspect == "dryer")
                        {   cout << "A piece of paper torn in 4 pieces, "
                                 << "and a word on each piece:\n"
                                 << "'in'\n"
                                 << "'secret'\n"
                                 << "'walls'\n"
                                 << "'the'\n\n"
                                 << "What could it mean?" << endl;
                            cout << string(16, '\n' );
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Chest" || inspect == "chest")
                        {   cout << "A very old, large chest." << endl;
                            if(key == 0)
                            {   cout << "It's locked. " << endl;
                                cout << string(22, '\n' );
                            }
                            if(key == 1)
                            {   cout << "The key from the bathroom!" << endl;
                                cout << string(21, '\n' );
                                cin.ignore();
                                cin.get();
                                cout << ". . ." << endl;
                                cout << string(21, '\n' );
                                cin.ignore();
                                cin.get();
                                cout << "It works!!\n"
                                << "Oh hey, there's a shotgun! [Attack 30]"
                                << "\nI'll take this" << endl;
                                if(my_attack < 30){my_attack = 30;}
                                cout << string(21, '\n' );
                            }
                            cin.ignore();
                            cin.get();
                        }
                        if(inspect == "Walls" || inspect == "walls")
                        {   if(wrench == 1)
                            {   if(fuse_open == 0)
                                fuse_open = 1;
                                cout << "There's a fuse box, "
                                << "but the door is sealed with. "
                                << "4 bolts." << endl;
                                cout << string(22, '\n' );
                                cin.ignore();
                                cin.get();
                                cout << "Wait! The wrench!" << endl;
                                cout << string(22, '\n' );
                                //cin.ignore();
                                cin.get();
                                cout << ". . ." << endl;
                                cout << string(22, '\n' );
                                //cin.ignore();
                                cin.get();
                                cout << "It's open!" << endl;
                                cout << string(22, '\n' );
                                //cin.ignore();
                                cin.get();

                            }

                                if(fuse_open == 1)
                                {
                                if(power == 0)
                                {
                                    cout << "The master power switch is off" << endl;
                                    cout << "Turn on? Y/N" << endl;
                                    cout << string(21, '\n' );
                                    cin >> fuse_on;
                                    if(fuse_on == 'Y' || fuse_on == 'y')
                                    {   cout << "The lights flicker, "
                                        << "so the power is on!" << endl;
                                        cout << string(22, '\n' );
                                        cin.ignore();
                                        cin.get();
                                        power = power + 1;  //sets power to ON
                                    }
                                    if(fuse_on == 'N' || fuse_on == 'n')
                                    {   cout << "I'll leave this alone for now.\n";
                                        cout << string(22, '\n' );
                                        //cin.ignore();
                                        cin.get();
                                    }

                                }
                                if(power == 1)
                                {
                                    cout << "The master power switch is on" << endl;
                                    cout << "Turn off? Y/N" << endl;
                                    cout << string(21, '\n' );
                                    cin >> fuse_on;
                                    if(fuse_on == 'Y' || fuse_on == 'y')
                                    {   cout << "The power is off" << endl;
                                        power = power - 1;  //sets power to off
                                        cout << string(22, '\n' );
                                        //cin.ignore();
                                        cin.get();
                                    }
                                    if(fuse_on == 'N' || fuse_on == 'n')
                                    {   cout << "I'll leave this alone" << endl;
                                        cout << string(22, '\n' );
                                        //cin.ignore();
                                        cin.get();
                                    }

                                }
                                }//end if fuse


                            if(wrench == 0)
                            {   cout << "There's a fuse box, "
                                << "but the door is sealed with. "
                                << "4 bolts. \nMaybe if I had some "
                                << "tools..." << endl;
                                cout << string(22, '\n' );
                            }
                            cin.get();
                        }
                        if(inspect == "Freezer" || inspect == "freezer")
                        {   cout << "4 rotten heads of cabbage." << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();
                        }

                        if(inspect == "Exit" || inspect == "exit")
                        {   cout << "Leaving the basement." << endl;
                            cout << string(22, '\n' );
                            cin.ignore();
                            cin.get();

                              //forced to fight 3 Bigs! Scary!
                            cout << "I have encountered a Big!" << endl;
                            cout << string(22, '\n' );
                            cin.get();
                            battleBig();
                            cin.ignore();
                            cin.get();
                            cout << "I have encountered a Big!" << endl;
                            cout << string(22, '\n' );
                            cin.get();
                            battleBig();
                            cin.ignore();
                            cin.get();
                            cout << "I have encountered a Big!" << endl;
                            cout << string(22, '\n' );
                            cin.get();
                            battleBig();
                            cin.get();
                            cin.ignore();
                            break;
                        }

                        else
                        {   cout << "Not an option." << endl;
                        }
                    }//end while loop

                }//end if basement

                    //if front door
                if(choice == "Front-door" || choice == "front-door")
                {   cout << "It is locked." << endl;
                    cout << string(22, '\n' );
                    cin.ignore();
                    cin.get();
                }
                    //if garage
                if(choice == "Garage" || choice == "garage")
                {   cout << name << "     Health: "
                         << my_health << "     Attack: "
                         << my_attack << endl << endl;
                    cout << "It is locked. There is a keyboard "
                         << "and monitor next to the door." << endl;
                    cout << string(20, '\n' );
                    cin.ignore();
                    cin.get();
                    if(power == 1)
                    {   passphraseFunction();

                        if(secret.compare(guess) == 0)
                        {   cout << "You have escaped the mansion!\n" << endl;
                            cout << string(21, '\n' );
                            cin.ignore();
                            break;
                        }

                    }
                    if(power == 0)
                    {   cout << "It's not on. In fact, none of"
                             << " the power is on in this house..\n";
                        cout << string(22, '\n' );
                        cin.get();
                    }
                }
                    //else not an option
                else
                {   cout << "That was not an option" << endl;
                }


            //before loop ends, enter battle sequence
                //generates random number
                //random number corresponds to specific zombie battle

            }//end while loop of main room

        }//end if yes to enter mansion



        //if the user wants to leave the dungeon
        else if(enter == 'N' || enter == 'n')
        {   cout << "No way, I'm out of here." << endl;
            cout << string(19, '\n' );
            break;
        }
        //error-handling
        else
        {   cout << "...Let me try that again." << endl;
            cout << string(22, '\n' );
            cin.ignore();
            cin.get();
            cout << endl;
        }

    }//end while
}//end function


