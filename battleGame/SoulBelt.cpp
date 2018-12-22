//
//  SoulBelt.cpp
//  battleGame
//
//  Created by Kadeem Bobcombe on 12/21/18.
//  Copyright © 2018 Kadeem Bobcombe. All rights reserved.
//

#include "SoulBelt.hpp"
#include "SoulRuler.cpp"
#include <vector>

using namespace std;

class SoulBelt{
    
    string name;
    int size = 0;
    Souls *mySouls[4] = {NULL,NULL,NULL,NULL};
    
    
    
public:
    
    SoulBelt(string name){
        
        this->name = name;
        
        
    }
    
    void addSouls(Souls *addedSoul){
        
        for (int i = 0; i<4; i++){
            if (size == 4){
                cout << "Soul Belt is currently full";
            }
            if(mySouls[i] == NULL){
                mySouls[i] = addedSoul;
                size += 1;
                break;
            }
        }
    }
    
    void printSouls(){
        for (int i = 0; i < 4; i++){
            if (mySouls[i] == NULL){
                cout << "No Soul in slot " << i+1 << "\n";
            
            }
            if (mySouls[i] != NULL){
                cout << mySouls[i]->getName() << " " ;
                cout << mySouls[i]->getMaxHealth() << "\n";
            }
        }
    }
    
    
    
};
