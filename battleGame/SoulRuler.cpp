//
//  SoulRuler.cpp
//  battleGame
//
//  Created by Kadeem Bobcombe on 12/21/18.
//  Copyright © 2018 Kadeem Bobcombe. All rights reserved.
//

#include "SoulRuler.hpp"
#include "Souls.cpp"
#include <vector>

class SoulRuler{
    
    string name;
    int health;
    Souls *currentSouls[3];
    vector<Souls> mySouls;
    //string
    
    
public:
    
    SoulRuler(string name, int health){
        this->name = name;
        this->health = health;
        this->currentSouls[3] = currentSouls[3];
        
        
    }
    
    
    virtual string warriorType() const{ return "unspecified"; }
    
    
};
