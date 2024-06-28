#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    
    int *Lista,size,i,media=0;
    Lista=new int[size];
    FILE *I;
    I=fopen("C:\\Users\\alear\\Onedrive\\Escritorio\\Info II\\18-04-2024 archivos\\integers.dat","r");
    if(I!=NULL)
    {
        printf("Archivo abierto");
    }
    fseek(I,0,SEEK_END);
    size=ftell(I)/sizeof(int);
    fseek(I,0,SEEK_SET);
    fclose(I);
    I=fopen("C:\\Users\\alear\\Onedrive\\Escritorio\\Info II\\18-04-2024 archivos\\integers.dat","r");
    for(i=0;i<size;i++)
    {
    fread(&Lista[i],sizeof(int),1,I);
    }
    fclose(I);
    for(i=0;i<size;i++)
    {
            media=media+Lista[i];
  }
    media=(media/size);
    I=fopen("C:\\Users\\alear\\Onedrive\\Escritorio\\Info II\\18-04-2024\\Promedio.txt","w");
    fprintf(I,"La media es:%d \n",media);
    fclose(I); 
    delete []Lista;
   // fin inciso 1
    return 0;


}
