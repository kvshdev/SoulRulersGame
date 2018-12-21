//
//  battle.cpp
//  battleGame
//
//  Created by Kadeem Bobcombe on 12/21/18.
//  Copyright © 2018 Kadeem Bobcombe. All rights reserved.
//

#include "battle.hpp"
#include <iostream>
using namespace std;

/*
 
    This is a class of Souls
 
 Soul Types
 
    Dark Soul
    Energy Soul
    Infinite Soul
    Light Soul
    Ghoul Soul
 
 
 
 
 */


class Souls{
  
    string name;
    int maxHealth, currentHealth;
    int defense, attack; //
    string *currentMoves[3];

    
public:
    
    Souls(string name, int maxHealth,int attack, int defense)
    {
        
        this->name = name;
        this->maxHealth = maxHealth;
        this->attack = attack;
        this->defense = defense;
    
    }
    
    virtual string getSoulType() const { return "unspecified";}
    virtual string getName() const { return name; }
    virtual string *getCurrentMoves() const { return *currentMoves; }
    virtual int getDefense() const { return defense; }
    virtual int getAttack() const { return attack; }
    virtual int getMaxHealth() const { return maxHealth; }
    virtual int getCurrentHealth() const { return currentHealth; }
    virtual string getReaperAttack() const { return "No reaper attack."; }
    virtual int getDarkAdvantage() const { return 0; }
    virtual int getLightAdvantage() const { return 0; }
    virtual int getEnergyAdvantage() const { return 0; }
    virtual int getInfiniteAdvantage() const { return 0; }
    virtual int getGhoulAdvantage() const { return 0; }
    
};

//this is the dark sousl class

class DarkSouls: public Souls{
    
    string reaperAttack;
    int darkAdvantage;
    
    
public:
    
    DarkSouls(string name, int maxHealth, int attack, int defense, string reaperAttack, int darkAdvantage) : Souls(name, maxHealth, attack, defense)
    {
        this->reaperAttack = reaperAttack;
        this->darkAdvantage = darkAdvantage;
    }
    
    string getSoulType() { return "Dark Soul Type"; }
    int getDarkAdvantage() { return darkAdvantage; }
    
    
};

//this is the lightsouls class

class LightSouls: public Souls{
    
    string lightAttack;
    int lightAdvantage;
    
public:
    LightSouls(string name, int maxHealth, int attack, int defense, string lightAttack, int lightAdvantage) : Souls(name, maxHealth, attack, defense)
    {
        this->lightAttack = lightAttack;
        this->lightAdvantage = lightAdvantage;
    }
    
    string getSoulType() { return "Light Soul Type"; }
    int getLightAdvantage() { return lightAdvantage; }
    
    
};

//this is the ghoul souls class

class GhoulSouls: public Souls{
    
    string ghoulAttack;
    int ghoulAdvantage;
    
    
public:
    
    GhoulSouls(string name, int maxHealth, int attack, int defense, string ghoulAttack, int ghoulAdvantage) : Souls(name, maxHealth, attack, defense)
    {
        this->ghoulAttack = ghoulAttack;
        this->ghoulAdvantage = ghoulAdvantage;
    }
    
    string getSoulType() { return "Ghoul Soul Type"; }
    int getGhoulAdvantage() { return ghoulAdvantage; }
    
    
};

//This is the energy souls class

class EnergySouls: public Souls{
    
    string energyAttack;
    int energyAdvantage;
    
    
public:
    
    EnergySouls(string name, int maxHealth, int attack, int defense, string energyAttack, int energyAdvantage) : Souls(name, maxHealth, attack, defense)
    {
        this->energyAttack = energyAttack;
        this->energyAdvantage = energyAdvantage;
    }
    
    string getSoulType() { return "Energy Soul Type"; }
    int getEnergyAdvantage() { return energyAdvantage; }
    
    
};

//this is the infinite souls class

class InfiniteSouls: public Souls{
    
    string infiniteAttack;
    int infiniteAdvantage;
    
    
public:
    
    InfiniteSouls(string name, int maxHealth, int attack, int defense, string infiniteAttack, int infiniteAdvantage) : Souls(name, maxHealth, attack, defense)
    {
        this->infiniteAttack = infiniteAttack;
        this->infiniteAdvantage = infiniteAdvantage;
    }
    
    string getSoulType() { return "Energy Soul Type"; }
    int getInfiniteAdvantage() { return infiniteAdvantage; }
    
    
};
