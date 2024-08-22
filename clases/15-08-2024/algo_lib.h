#pragma once


class Din_Vmk
{
private:
    int *v, size ;
public:
Din_Vmk();
Din_Vmk(int n);
void set_v(int pos, int val);
int get_v(int pos);
//int operator[](int n);
int& operator[](int pos);
int GetSize(){return size;}
};
