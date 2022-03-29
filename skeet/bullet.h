//
//  bullet.hpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/7/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#ifndef BULLET_H
#define BULLET_H

#include <iostream>
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"


class Bullet
{
private:
    bool alive;
    Point bullet;
    Velocity velocity;
    float speed;

    
public:
    
   // ~Bullet() { std::cout << "Yhave kill the bullet  \n";}
    Bullet(): bullet(200,-200), alive(true), speed(10) {    }
    Point getPoint()const {return bullet;}
    Velocity getVelocity() const {return velocity;}
    bool isAlive() const {return alive;}
    void setPoint(Point inputPoint) {this->bullet = inputPoint;}
    void setVelocity (Velocity inputVelocity) {this->velocity = inputVelocity;}
    
    void kill();
    void advance();
    void draw();
    void fire(Point apoint, float angle);
    
};

#endif /* bullet_hpp */
