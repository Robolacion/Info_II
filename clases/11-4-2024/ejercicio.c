#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
struct punto
{
    float pos_x;
    float pos_y;
    int temp;
}; // algo

int main(int argc, char const *argv[])
{
    struct punto dato [20],verify[20];
    int i,menor,menor_dir=2000;
    float suma,promedio;
    FILE *f;
    srand(time(0));
    for ( i = 0; i < 20; i++)
    {
        dato[i].pos_x= rand()%100-50;
        dato[i].pos_y= rand()%100-50;
        dato[i].temp=rand()%200-100;
    }
    f=fopen("C:\\Users\\alear\\OneDrive\\Escritorio\\Info II\\11-4-2024\\datos.txt","wb");
    
   
    
    fwrite(dato,sizeof(struct punto),20,f);
    
    fclose(f);
     f=fopen("C:\\Users\\alear\\OneDrive\\Escritorio\\Info II\\11-4-2024\\datos.txt","rb+");
    


   fread(verify,sizeof(struct punto),20,f);

   for ( i = 0; i < 20; i++)
   {
    if(menor>verify[i].temp)
    {
        menor=verify[i].temp;
        menor_dir=i;
    }
    suma=verify[i].temp;
    //printf ("pos x:%f,pos y:%f,Temp:%d \n",verify[i].pos_x,verify[i].pos_y,verify[i].temp);
   }
    printf ("el punto de menor temperatura es el punto %d en x:%f y:%f a %d °C \n",menor_dir,verify[menor_dir].pos_x,verify[menor_dir].pos_y,verify[menor_dir].temp);
   promedio=suma/20;
    printf("el promedio de temperaturas es:%f °C",promedio);
    

    fclose(f);

    return 0;
}
