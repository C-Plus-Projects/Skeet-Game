//
//  sacrated.hpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/15/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#ifndef SACRATED_H
#define SACRATED_H

#include <iostream>
#include "bird.h"


class Sacrated : public Bird
{
protected:
    
public:
    Sacrated();
    void draw();
    int hit();
};

#endif /* sacrated_hpp */
