#include "algo_lib.h"
#include <iostream>
//constructores
Din_Vmk::Din_Vmk()
{
    v=new int [10];
}

Din_Vmk::Din_Vmk(int n)
{
   v=new int[n];
}
/* destructor
::~()
{
}*/
// Desarrollo
void Din_Vmk::set_v(int pos, int val)
{
   if(size>pos && pos<size) 
        v[pos]=val;
}
int Din_Vmk::get_v(int pos)
{
   if(size>pos && pos<size) 
        return v[pos];
    else
        exit;
}
/*int Din_Vmk::operator[](int n){
    return get_v(n);
}*/

int& Din_Vmk::operator[](int pos){
    if(size>pos && pos<size)
    return v[pos]; 
}