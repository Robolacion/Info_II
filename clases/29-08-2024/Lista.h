#pragma once
#include <stdlib.h>
#include <iostream>

struct node
{
    int data;
    node *next;
};


class Lista
{
private:
    node *header;
    int N_elem;
    
public:

    Lista()
    {
     header=new node;
     N_elem=0;
     header->next=NULL;   
    };

    //~Lista()

    void append(int value);
    node*getnode(int pos);
    void erase_node(int pos);
    void insert(int pos,int data);
    void show();

};


    

    
    

    
    


    
    
