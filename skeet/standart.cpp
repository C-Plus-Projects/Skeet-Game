//
//  bird.cpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/7/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#include "standart.h"

Standard::Standard() : Bird()
{
}

void Standard :: draw()
{
    drawCircle(position, radius);
}

int Standard:: hit()
{
    kill();
    return 1;
}
