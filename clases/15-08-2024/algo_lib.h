#pragma once


class Din_Vmk
{
private:
    int *v, size ;
public:
Din_Vmk();
Din_Vmk(int n);
Din_Vmk(Din_Vmk& aux);
~Din_Vmk(){delete[]v;}
void set_v(int pos, int val);
int get_v(int pos);
//int operator[](int n);
int& operator[](int pos);
int GetSize(){return size;}
void resize(int new_size);
void concat(Din_Vmk v2);

};
