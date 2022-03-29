//
//  bird.hpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/7/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#ifndef STANDART_H
#define STANDART_H

#include <iostream>
#include "bird.h"


class Standard : public Bird
{
protected:
    
public:
    Standard();
    void draw();
    int hit();
};

#endif /* bird_hpp */

