/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 9
    This program will perform all the tasks
*/

#include <iostream>
#include <cmath>
#include "coord3d.h"
#include "funcs.h"

double length(Coord3D *p)
{
    double fina = p->x * p->x;
    fina += p->y * p->y;
    fina += p->z * p->z;
    return sqrt(fina);
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double a = length(p1);
    double b = length(p2);

    if(a > b)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}
