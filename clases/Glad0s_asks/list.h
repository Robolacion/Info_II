#pragma once
#include <stdio.h>
struct Glad0s
{
 char *question;

    float answer;
};

struct Glad0s *list;


int List_size;
FILE *f;
void main()
{
    f=fopen("C:\\Users\\alear\\OneDrive\\Escritorio\\Info II\\9-5-2024\\List.dat","rb");
    fseek(f,0,SEEK_END);
    List_size=ftell(f)/sizeof(Glad0s);
    list=new struct Glad0s [List_size];
    
}



 

struct Glad0s *new_question( struct Glad0s *List , int list_size);
