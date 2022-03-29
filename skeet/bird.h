//
//  bird.hpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/7/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#ifndef BIRD_H
#define BIRD_H

#include <iostream>

#include "flying.h"

class Bird : public Flying
{
protected:
    int type;
    
public:
    //~Bird() { std::cout << "You have kill the bird \n";}
    Bird();
    virtual void draw() = 0;
    void advance();
    virtual int hit();
    
};

#endif /* bird_hpp */
