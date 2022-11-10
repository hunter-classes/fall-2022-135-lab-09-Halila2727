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

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    (*ppos).x = (*ppos).x + (*pvel).x * dt; //ppos->x is the same thing
    (*ppos).y = (*ppos).y + (*pvel).y * dt;
    (*ppos).z = (*ppos).z + (*pvel).z * dt;
}

//a?b:c == if a, b else c

Coord3D* createCoord3D(double x, double y, double z)
{
    Coord3D *point = new Coord3D;
    (*point).x = x;
    (*point).y = y;
    (*point).z = z;
    return point; 
}

void deleteCoord3D(Coord3D *p)
{
    delete p;
}