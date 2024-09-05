#include "algo_lib.h"
#include <iostream>
//constructores
Din_Vmk::Din_Vmk()
{
    v=new int [10];
    size=10;
}

Din_Vmk::Din_Vmk(int n)
{
   v=new int[n];
   size=n;
}
Din_Vmk::Din_Vmk(Din_Vmk& aux){
    aux.size=size;
    aux.v=new int[size];
     for (size_t i = 0; i < size; i++)
    {
        v[i]=aux.v[i];
    }

}
//operadores

/*int Din_Vmk::operator[](int n){
    return get_v(n);
}*/

int& Din_Vmk::operator[](int pos){
    if(size>pos && pos>=0)
    return v[pos]; 
}

void Din_Vmk::operator=(Din_Vmk& x){
    resize(x.size);
    for (size_t i = 0; i < size; i++)
    {
        v[i]=x.v[i];
    }
    
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


void Din_Vmk::resize(int new_size){
  int i=0,*n;
  n=new int[new_size];
    for(i=0;i<size;i++)
    {
     n[i]=v[i];
    }
    delete[]v;
    v=new int[new_size];
    for(i=0;i<size;i++)
    {
     v[i]=n[i];
    }
    size=new_size;
    delete[]n;
}
void Din_Vmk:: concat(Din_Vmk v2){
    int new_size,*n,i;
    new_size=size+v2.GetSize();
    n=new int[new_size];
    for(i=0;i<size;i++)
    {
     n[i]=v[i];
    }
    delete[]v;
    v=new int [new_size];
    for (i = 0; i < new_size; i++)
    {
        if (i<size)
            v[i]=n[i];
        else
            v[i]=v2[i];    
    }
    size=new_size;
    delete[]n;
}