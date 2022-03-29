//
//  bird.cpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/7/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#include "bird.h"

Bird::Bird() : Flying(), type (random(0,3))
{
    
    if(position.getY() < 0 )
        setVelocity(Velocity(random(3,6),random(0,5)));
    
    if (position.getY() > 0)
        setVelocity(Velocity(random(3,6),random(-5,0)));
    
    
   // position.setX(100);
   // position.setY(-100);
}

void Bird::advance()
{
        position.setX(position.getX() + speed.getDx());
        position.setY(position.getY() + speed.getDy());
}


int Bird::hit()
{
    return 1;
}


