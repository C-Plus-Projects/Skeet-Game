//
//  tough.cpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/15/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#include "tough.h"

Tough::Tough() : Bird()
{
    life = 3;
    if(position.getY() < 0 )
        setVelocity(Velocity( random(2,4),random(-3,3)));
       
    else if (position.getY() > 0)
           setVelocity(Velocity( random(2,3),random(-3,3)));
    
    score = 0;

}


void Tough:: draw()
{
    drawToughBird(position, radius, life);
}
int Tough::hit()
{
    //drawToughBird(position, radius, life);
    life--;
    score++;
    int points = 1;
    if (score == 3)
    {
        points = 3;
    }
    if (life == 0)
        kill();
    return points;
    
}


