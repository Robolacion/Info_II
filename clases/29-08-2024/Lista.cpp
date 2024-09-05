#include "Lista.h"
void Lista::append(int value)
{
    node *last=getnode(N_elem-1); //apunta al ultimo nodo
    node *aux;
    aux=new node;
    last->next=aux;
    aux->next=NULL;
    aux->data=value;
    N_elem ++;
    printf("append exit %d",aux->data);

};

node* Lista:: getnode(int pos)
{
    int i=0;
    if(pos<-1||pos>=N_elem)

        return NULL;

    node*last;
    last=header;
    

    while (i<=pos)
    {
        last=last->next;
        i++;
    }
    printf("getnode exit");
    return last;
}
void Lista::erase_node(int pos){
    node *previous,*actual, *follow;
    if(pos<-1||pos>=(N_elem-2))
    {

    }
    else{
    previous=getnode(pos-1);
    actual=previous->next;
    follow=actual->next;
    previous->next=follow;
    delete [] actual;
    printf("erase exit");
    }
}
 void Lista:: insert(int pos,int data){
     node *previous,*new_node, *follow;
    if(pos<-1||pos>=(N_elem-2))
    {

    }
    else{
    new_node=new node;
    previous=getnode(pos-1);
    follow=previous->next;
    previous->next=new_node;
    new_node->next=follow;
    new_node->data=data;
    }
 }
 void Lista::show(){
    int i;
    node *aux=header;
    for (i=0;i<N_elem;i++)
    {
        aux=aux->next;
        std::cout<<"Item["<<i-1<<"]:"<<aux->data<<"   "<<std::endl;
    }
 }