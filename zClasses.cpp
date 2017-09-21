//#pragma once
#include "zClasses.h"


//int wHealth = 10;   //walker
//int rHealth = 20;   //runner
//int sHealth = 20;   //spitter
//int bHealth = 50;    //big

    //attack damage set in class member functions
//int wAttack;
//int rAttack;
//int sAttack;
//int bAttack;

class Zombie
{   public:
        Zombie()
        {   this->details = 0;
        }

        Zombie(int stuff)
        {   this->details = stuff;
        }
    protected:
        int details;
};

class Walker : public Zombie   //Walker inherits the public aspects of Zombie
{   public:
        Walker() : Zombie(2)   //Zombie constructor that takes an argument of 2
        {   this->strength = 0;    //in Walker, we have the properties of Zombie, so we must initialize Zombie
            this->hitpoints = 0;    //and then we can add anything we need to
        }

        Walker(double strength, double hitpoints) : Zombie(2)
        {   this->strength = strength;
            this->hitpoints = hitpoints;
        }
            //the attack points dealt by Zombies
        double attack()
        {       //random number to generate the damage dealt
            atk = rand() % 10;
            bite = 0;
            cout << "                                             ";
            cout << "Walker attacked " << atk << " damage!" << endl;
                //Walkers have a 10% chance to deal extra damage
            if((rand() % 100) < 10)
            {   bite = rand() % 10;
                cout << "                                             ";
                cout << "And bit you +" << bite  << "!" << endl;
                cout << string(11, '\n' );
                cin.ignore();
                cin.get();
            }
            else
            {   cout << string(12, '\n' );
                cin.ignore();
                cin.get();
            }
            atk = atk + bite;
            return atk;
        }

    protected:
        int atk;
        int bite;
        double strength;
        double hitpoints;
};

class Spitter : public Zombie   //Spitter inherits the public aspects of Zombie
{   public:
        Spitter() : Zombie(2)   //Zombie constructor that takes an argument of 2
        {   this->strength = 0;    //in Spitter, we have the properties of Zombie, so we must initialize Zombie
            this->hitpoints = 0;    //and then we can add anything we need to
        }

        Spitter(double strength, double hitpoints) : Zombie(2)
        {   this->strength = strength;
            this->hitpoints = hitpoints;
        }

        double attack()
        {   atk = rand() % 5;
            spit = 0;
            cout << "                                             ";
            cout << "Spitter attacked " << atk << " damage!" << endl;
            if((rand() % 100) < 50)
            {   spit = rand() % 15;
                cout << "                                             ";
                cout << "And projectile-vomited +" << spit  << "!" << endl;
                cout << string(11, '\n' );
                cin.ignore();
                cin.get();
            }
            else
            {   cout << string(12, '\n' );
                cin.ignore();
                cin.get();
            }
            atk = atk + spit;
            return atk;
        }

    protected:
        int atk;
        int spit;
        double strength;
        double hitpoints;
};



class Big : public Zombie   //Big inherits the public aspects of Zombie
{   public:
        Big() : Zombie(2)   //Zombie constructor that takes an argument of 2
        {   this->strength = 0;    //in Big, we have the properties of Zombie, so we must initialize Zombie
            this->hitpoints = 0;    //and then we can add anything we need to
        }

        Big(double strength, double hitpoints) : Zombie(2)
        {   this->strength = strength;
            this->hitpoints = hitpoints;
        }

        double attack()
        {   atk = rand() % 20;
            charge = 0;
            cout << "                                             ";
            cout << "Big attacked " << atk << " damage!" << endl;
            if((rand() % 100) < 33)
            {   charge = rand() % 20;
                cout << "                                             ";
                cout << "And charged at you dealing +" << charge  << "!" << endl;
                cout << string(11, '\n' );
                cin.ignore();
                cin.get();
            }
            else
            {   cout << string(12, '\n' );
                cin.ignore();
                cin.get();
            }
            atk = atk + charge;
            return atk;
        }

    protected:
        int atk;
        int charge;
        double strength;
        double hitpoints;

    private:
};

class Runner : public Zombie   //Runner inherits the public aspects of Zombie
{   public:
        Runner() : Zombie(2)   //Zombie constructor that takes an argument of 2
        {   this->strength = 0;    //in Runner, we have the properties of Zombie, so we must initialize Zombie
            this->hitpoints = 0;    //and then we can add anything we need to
        }

        Runner(double strength, double hitpoints) : Zombie(2)
        {   this->strength = strength;
            this->hitpoints = hitpoints;
        }

        double attack()
        {   atk = rand() % 10;
            atk = atk * 2;
            cout << "                                             ";
            cout << "Runner double attacked " << atk << " damage!" << endl;
            cout << string(11, '\n' );
            cin.ignore();
            cin.get();

            return atk;
        }

    protected:
        int atk;
        double strength;
        double hitpoints;

    private:
};
