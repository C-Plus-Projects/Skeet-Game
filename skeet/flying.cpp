//
//  flying.cpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/15/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#include "flying.h"

void Flying::advance()
{
        position.setX(position.getX() + speed.getDx());
        position.setY(position.getY() + speed.getDy());
}

void Flying::setPoint(Point inputPoint)
{
    this->position = inputPoint;
}

void Flying::setVelocity(Velocity inputVelocity)
{
    this->speed = inputVelocity;
}

void Flying::kill()
{
    alive = false;
    
}


