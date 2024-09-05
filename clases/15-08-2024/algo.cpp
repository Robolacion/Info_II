#include "algo_lib.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    Din_Vmk V1,V2(3),V3;
    int i=0;
    for (i = 0; i < V2.GetSize() ; i++)
    {
        V2[i]=i*i;
        std::cout<<"V2["<<i<<"]"<<V2[i]<<std::endl;
    }
    cout<<"a";
    V3[0]=0;
    cout<<"V3_size="<<V3.GetSize();
    cout<<"V1_size="<<V1.GetSize();
    
    for (i = 0; i < V1.GetSize() ; i++)
    {
        V1[i]=2*i;
        V3[i]=V3[i]+1;
        cout<<"V1["<<i<<"]="<<V1[i]<<"V3["<<i<<"]="<<V3[i]<<endl;
    }
    cout<<"b";
    V1[2]=V3[2];
    cout<<"<x";
    for (i = 0; i < V1.GetSize(); i++)
    {
        V1[i]=V1[i]*V3[i];
        cout<<":)";
    }
    cout<<"c";
    V1.concat(V2);
    cout<<endl;
    cout<<"d";
    for ( i = 0; i < V1.GetSize(); i++)
    {
         std::cout<<"V1["<<i<<"]"<<V1[i]<<std::endl;
        /* code */
    }
    cout<<"f";
scanf("%d",&i);
    return 0;
}

/*vector dinamico*/

