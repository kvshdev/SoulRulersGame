//
//  main.cpp
//  battleGame
//
//  Created by Kadeem Bobcombe on 12/21/18.
//  Copyright © 2018 Kadeem Bobcombe. All rights reserved.
//

 /*
  DarkSouls(string name, int maxHealth, int attack, int defense, string reaperAttack) : Souls(name, maxHealth, attack, defense)
  
  */
#include <iostream>
#include "Souls.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    DarkSouls *Kash = new DarkSouls("Kash", 100, 25, 25, "Buster Cannon",10);
    LightSouls *Myles = new LightSouls("Myles", 100, 25, 25, "Light Beam", 20);
    //cout << Kash->getSoulType() << "\n";
    
    int soul1health = Kash->getMaxHealth();
    int soul1attack = Kash->getAttack();
    int soul2health = Myles->getMaxHealth();
    int soul2attack = Myles->getAttack();
    
    cout << "Myles attacks Kash\n" ;
    cout << "Kash's health is now " << soul1health - soul2attack << " hp,\n";
    
    return 0;
    
    
   
}
