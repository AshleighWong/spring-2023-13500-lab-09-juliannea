#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

// add functions here

double length(Coord3D *p)
{
    //access members of a pointer to a class 
    double xval = p -> x;
    double yval = p -> y;
    double zval = p -> z;

    //calculations 
    double total = sqrt((pow(xval,2))+ (pow(yval,2)) + (pow(zval,2)));

    return total;
}

//task b
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) //adding the values of the class as the paremeter 
{
    //finding the length 
    double p1_val = length(p1);
    double p2_val = length(p2);

    
    //determining which is greater
    if(p1_val > p2_val)
    {
		return p1;
	}
	else
	{
		return p2;
	}
}

//task c
void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    //changing the value of ppos with new coordingates using *ppos so it changes value not address
   (*ppos).x = (*ppos).x + (*pvel).x * dt;
   (*ppos).y = (*ppos).y + (*pvel).y * dt;
   (*ppos).z = (*ppos).z + (*pvel).z * dt;

    //changes the value of the original ppos because we pass the addres of pos (&pos) so the function manipukates the original object pos 
}
//task E
Coord3D* createCoord3D(double x, double y, double z)
{
    Coord3D *rcoord = new Coord3D; // allocates memory by calling: operator new
    (*rcoord).x = x;
    (*rcoord).y = y;
    (*rcoord).z = z;

    return rcoord;
}

void deleteCoord3D(Coord3D *p)
{
    delete p;
}