#pragma once
struct point
{
    float Pos_x;
    float Pos_y;
};

struct point Move_the_P (struct point coord);
 float Distance (struct point p1,struct point p2);
struct point P_adder (struct point p1,struct point p2);
struct point P_Multi (struct point p1,int n);
