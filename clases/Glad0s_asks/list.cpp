#include "list.h"

int *resize(int *vector,int old_size,int new_size);

struct Glad0s *new_question( struct Glad0s *List , int list_size){
    resize(*List,list_size,list_size+1);
    //list[list_size+1]='gets casero'; //crear el gets casero

 }
//FUNCION PARA AMPLIAR EL VECTOR
 int *resize(int *vector,int old_size,int new_size)
 
{
    int *v,i;
    if(new_size>=old_size)
    {
        v=new int[new_size];
        for (i = 0; i < old_size; i++)
        {
            v[i]=vector[i];
        }
    }
    else
    {
        for (i = 0; i < new_size; i++)
        {
            v[i]=vector[i];
        }
    
    }
 delete[]vector;
    return v;
}