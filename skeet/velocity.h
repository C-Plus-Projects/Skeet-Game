//
//  velocity.hpp
//  moon_lander
//
//  Created by Eddy Gonzalez on 10/27/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#ifndef VELOCITY_H
#define VELOCITY_H

#include "point.h"

class Velocity
{
private:
    Point point;
    float dx;
    float dy;
    
public:
    Velocity()
    {
        dx = 0.0;
        dy = 0.0;
    }
    
    Velocity(float inputDx, float inputDy)
     {
        this->dx = inputDx;
        this->dy = inputDy;
    }
    
    void setDx(float inputDx){this->dx = inputDx;}
    void setDy(float inputDy){this->dy = inputDy;}
    float getDx() const{return dx;}
    float getDy() const{return dy;}
};


#endif /* velocity_hpp */

