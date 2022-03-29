//
//  bullet.cpp
//  Skeet
//
//  Created by Eddy Gonzalez on 11/7/19.
//  Copyright © 2019 CS165. All rights reserved.
//

#include "bullet.h"
#include "uiDraw.h"

void Bullet::draw()
{
    drawDot(bullet);
}

void Bullet::fire(Point apoint, float angle)
{
    velocity.setDx(velocity.getDx()+ speed * (-cos(M_PI / 180.0 * angle)));
    velocity.setDy(velocity.getDy()+ speed * (sin(M_PI / 180.0 * angle)));
}

void Bullet::kill()
{
    alive = true;
}

void Bullet::advance()
{
    bullet.setX(bullet.getX() + velocity.getDx());
    bullet.setY(bullet.getY() + velocity.getDy());
}







