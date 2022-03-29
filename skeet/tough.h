//
//  tough.hpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/15/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#ifndef TOUGH_H
#define TOUGH_H

#include <iostream>
#include "bird.h"


class Tough : public Bird
{
protected:
    
    int score;
    
public:
    Tough();
    void draw();
    int hit();
    
    
};


#endif /* tough_hpp */
