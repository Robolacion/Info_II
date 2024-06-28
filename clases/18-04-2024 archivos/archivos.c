#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /*
    int Lista[1000],size,i,media=0;
    
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
    I=fopen("C:\\Users\\alear\\Onedrive\\Escritorio\\Info II\\18-04-2024 archivos\\Promedio.txt","w");
    fprintf(I,"La media es:%d \n",media);
    fclose(I); */
   // fin inciso 1
   int Lista[1000],size,i; 
    FILE *I;
    I=fopen("C:\\Users\\alear\\Onedrive\\Escritorio\\Info II\\18-04-2024 archivos\\complex.dat","w");
     fseek(I,0,SEEK_END);
    size=ftell(I)/sizeof(double);
    fseek(I,0,SEEK_SET);
    fclose(I);


    return 0;


}
