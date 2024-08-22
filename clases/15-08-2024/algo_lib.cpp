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
Din_Vmk::Din_Vmk(Din_Vmk& aux){
    aux.size=size;
    aux.v=new int[size];

}
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

void Din_Vmk::resize(int new_size){
  int i=0,n[size];
    for(i=0;i<size;i++)
    {
     n[i]=v[i];
    }
    v=new int[new_size];
    for(i=0;i<size;i++)
    {
     v[i]=n[i];
    }
    size=new_size;
}
void Din_Vmk:: concat(Din_Vmk v2){
    int new_size,n[size],i;
    new_size=size+v2.size;
    
    for(i=0;i<size;i++)
    {
     n[i]=v[i];
    }
    v=new int [new_size];
    for (i = 0; i < new_size; i++)
    {
        if (i<size)
            v[i]=n[i];
        else
            v[i]=v2.v[i];    
    }
    size=new_size;
}