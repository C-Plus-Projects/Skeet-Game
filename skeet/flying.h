//
//  flying.hpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/15/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#ifndef FLYING_H
#define FLYING_H
#include <iostream>
#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

class Flying
{
protected:
    Point position;
    Velocity speed;
    bool alive;
    int radius;
    int life;

          
public:
    
  
    Flying(): position(-200,random(-200, 200)), speed(0,0), alive(true), radius(15), life(3) {};
    
    //getters
    Velocity getVelocity () const {return speed;}
    Point getPoint() const {return position;}
    
    //setters
    void setPoint(Point inputPoint); 
    void setVelocity(Velocity inputVelocity);
    void setAlive (bool inputAlive) {this->alive = inputAlive;}
    bool isAlive() const {return alive;}
    
    void advance ();
    
    virtual void draw() = 0;
    void kill();
    
        
};

#endif

