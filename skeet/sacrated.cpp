//
//  sacrated.cpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/15/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#include "sacrated.h"

Sacrated::Sacrated() : Bird()
{
    
}

void Sacrated :: draw()
{
    drawSacredBird(position, radius);
}

int Sacrated::hit()
{
    alive = false;
    std::cout << "You have hit the bird in sacred \n" ;
    return -9;

}
