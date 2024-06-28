#include "punto.h"
#include <stdio.h>
#include <math.h>

struct point Move_the_P (struct point coord)
{
    struct point Temp_value;
    coord.Pos_x=scanf("%f",&coord.Pos_x);
    printf ("\n Ingrese coordenada en x");
    coord.Pos_y=scanf("%f",&coord.Pos_y);
    printf ("\n Ingrese coordenada en y");
    return Temp_value;
}
float Distance (struct point p1,struct point p2)
{
    float x,y,result;
    x=p2.Pos_x-p1.Pos_x;
    y=p2.Pos_y-p1.Pos_y;
    result=sqrt (x*x+y*y);
    return result;
}
struct point P_adder (struct point p1,struct point p2)
{
    struct point result;
    result.Pos_x=p1.Pos_x+p2.Pos_x;
    result.Pos_y=p1.Pos_y+p2.Pos_y;
    return result;
}
struct point P_Multi (struct point p1,int n)
{
     struct point result;
    result.Pos_x=p1.Pos_x*n;
    result.Pos_y=p1.Pos_y*n;
    return result;
}
