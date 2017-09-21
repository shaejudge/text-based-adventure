#include "zPassphrase.h"
#include "zStoryHeader.h"
#include "zClasses.cpp"

    //(Strength, Hitpoints)
Walker w(10,20);
Spitter s(5,30);
Runner r(8,30);
Big b(20,70);
int zType;
string guess;
string secret = "AIM FOR THE HEAD";     //code needed for garage

void passphraseFunction()
{    while(true)
    {   //char restart;       //Y/N for restart

        string exit = "exit";

        cout << "Enter the passphrase, or enter 'exit' to leave the keypad." << endl;
        cout << "Note: This keypad is case-sensitive." << endl;
        cout << string(21, '\n' );
        getline (cin, guess);

        if(secret.compare(guess) == 0)
        {   cout << "ACCESS GRANTED\n" << endl;
            cout << string(21, '\n' );
            cin.ignore();
            //cin.get();
            break;
        }

        else if(exit.compare(guess) == 0)
        {   cout << "Leaving the keypad" << endl;
            cout << string(22, '\n' );
            cin.ignore();
            //cin.get();
            break;
        }

        else
        {   cout << "ACCESS DENIED" << endl;
            cout << "Try again." << endl;
            cout << string(21, '\n' );
            //cin.ignore();
            cin.get();
        }
    }
}
    //battle functions
    //random number generated, bases who player fights
void battleChooser()
{   unsigned seed;
    seed = time(0);
    srand(seed);
    cout << name << "     Health: "
         << my_health << "     Attack: "
         << my_attack << endl << endl;
    zType = rand() % 10;
    cout << "I have encountered a ";
    if(zType >= 0 && zType < 5)
    {   cout << "Walker!" << endl;
        cout << string(20, '\n' );
        cin.ignore();
        battleWalker();
        cin.ignore();
        cin.get();
    }
    if(zType == 5 || zType == 6)
    {   cout << "Runner!" << endl;
        cout << string(20, '\n' );
        cin.ignore();
        battleRunner();
        cin.ignore();
        cin.get();
    }
    if(zType == 7 || zType == 8)
    {   cout << "Spitter!" << endl;
        cout << string(20, '\n' );
        cin.ignore();
        battleSpitter();
        cin.ignore();
        cin.get();
    }
    if(zType == 9)
    {   cout << "Big!" << endl;
        cout << string(20, '\n' );
        cin.ignore();
        battleBig();
        cin.ignore();
        cin.get();
    }
}

void battleWalker()
{   int wHealth = 20;   //reset health if battled again
    while(true)
    {//needs ending bracket
    cout << name << "     Health: "
         << my_health << "     Attack: "
         << my_attack << endl << endl << endl;
    cout << "                                   ";
    cout << "Walker health: "
         << wHealth << endl;
        //what to do?
    cout << "What should I do?!\n" << endl;
    cout << "Fight     Run" << endl;
    cout << string(16, '\n' );
    cin >> battleChoice;
        //if fight
    if(battleChoice == "Fight" || battleChoice == "fight")
    {   //battle loop
            i_attack();
            wHealth = wHealth - my_attack;
            cout << string(7, '\n' );
            if(wHealth < 1)
            {   cout << "I killed the Walker!" << endl;
                cout << string(11, '\n' );
                break;
            }

            my_health = my_health - w.attack();
            if(my_health < 1)
            {   cout << "I am dead..." << endl;
                cout << string(11, '\n' );
                break;
                break;
            }
    }
    //if run
    if(battleChoice == "Run" || battleChoice == "run")
    {   cout << "Attempting to run from the Walker!" << endl;
        cout << string(22, '\n' );
        run = rand() % 100;
        if((rand() % 100) < 33)     //33% chance to succeed running
        {   cout << "You got away!" << endl;
            cout << string(22, '\n' );
            break;
        }
        else
        {   cout << "You failed!" << endl;
            my_health = my_health - w.attack();
            cout << string(22, '\n' );
        }

    }
    }//end while loop
}

void battleRunner()
{   int rHealth = 30;   //reset health if battled again
    while(true)
    {//needs ending bracket
    cout << name << "     Health: "
         << my_health << "     Attack: "
         << my_attack << endl << endl << endl;
    cout << "                                   ";
    cout << "Runner health: "
         << rHealth << endl;
        //what to do?
    cout << "What should I do?!\n" << endl;
    cout << "Fight     Run" << endl;
    cout << string(16, '\n' );
    cin >> battleChoice;
        //if fight
    if(battleChoice == "Fight" || battleChoice == "fight")
    {   //battle loop
            i_attack();
            rHealth = rHealth - my_attack;
            cout << string(7, '\n' );
            if(rHealth < 1)
            {   cout << "I killed the Runner!" << endl;
                cout << string(11, '\n' );
                break;
            }

            my_health = my_health - r.attack();
            if(my_health < 1)
            {   cout << "I am dead..." << endl;
                cout << string(11, '\n' );
                break;
                break;
            }

    }
    //if run
    if(battleChoice == "Run" || battleChoice == "run")
    {   cout << "Attempting to run from the Runner!" << endl;
        cout << string(22, '\n' );
        run = rand() % 100;
        if((rand() % 100) < 33)
        {   cout << "You got away!" << endl;
            cout << string(22, '\n' );
            break;
        }
        else
        {   cout << "You failed!" << endl;
            my_health = my_health - r.attack();
            cout << string(22, '\n' );
        }
    }
    }//end while loop
}

void battleSpitter()
{   int sHealth = 30;   //reset health if battled again
    while(true)
    {//needs ending bracket
    cout << name << "     Health: "
         << my_health << "     Attack: "
         << my_attack << endl << endl << endl;
    cout << "                                   ";
    cout << "Spitter health: "
         << sHealth << endl;
        //what to do?
    cout << "What should I do?!\n" << endl;
    cout << "Fight     Run" << endl;
    cout << string(16, '\n' );
    cin >> battleChoice;
        //if fight
    if(battleChoice == "Fight" || battleChoice == "fight")
    {   //battle loop
            i_attack();
            sHealth = sHealth - my_attack;
            cout << string(7, '\n' );
            if(sHealth < 1)
            {   cout << "I killed the Spitter!" << endl;
                cout << string(11, '\n' );
                break;
            }

            my_health = my_health - s.attack();
            if(my_health < 1)
            {   cout << "I am dead..." << endl;
                cout << string(11, '\n' );
                break;
                break;
            }
    }
    //if run
    if(battleChoice == "Run" || battleChoice == "run")
    {   cout << "Attempting to run from the Spitter!" << endl;
        cout << string(22, '\n' );
        run = rand() % 100;
        if((rand() % 100) < 33)
        {   cout << "You got away!" << endl;
            cout << string(22, '\n' );
            break;
        }
        else
        {   cout << "You failed!" << endl;
            my_health = my_health - s.attack();
            cout << string(22, '\n' );
        }
    }

    }
}

void battleBig()
{   int bHealth = 70;   //reset health if battled again
    while(true){//needs ending bracket
    cout << name << "     Health: "
         << my_health << "     Attack: "
         << my_attack << endl << endl << endl;
    cout << "                                   ";
    cout << "Big health: "
         << bHealth << endl;
        //what to do?
    cout << "What should I do?!\n" << endl;
    cout << "Fight     Run" << endl;
    cout << string(16, '\n' );
    cin >> battleChoice;
        //if fight
    if(battleChoice == "Fight" || battleChoice == "fight")
    {   //battle loop
            i_attack();
            bHealth = bHealth - my_attack;
            cout << string(7, '\n' );
            if(bHealth < 1)
            {   cout << "I killed the Big!" << endl;
                cout << string(11, '\n' );
                break;
            }

            my_health = my_health - b.attack();
            if(my_health < 1)
            {   cout << "I am dead..." << endl;
                cout << string(11, '\n' );
                break;
                break;
            }
    }
        //if run
    if(battleChoice == "Run" || battleChoice == "run")
    {   cout << "Attempting to run from the Big!" << endl;
        cout << string(22, '\n' );
        run = rand() % 100;
        if((rand() % 100) < 33)
        {   cout << "You got away!" << endl;
            cout << string(22, '\n' );
            break;
        }
        else
        {   cout << "You failed!" << endl;
            my_health = my_health - b.attack();
            cout << string(22, '\n' );
        }
    }
        cout << "[Enter] to continue" << endl;
        cin.ignore();
        //cin.get();


    }//end while loop

}

void i_attack()
{   cout << "I dealt " << my_attack << " damage!\n" << endl;
}
