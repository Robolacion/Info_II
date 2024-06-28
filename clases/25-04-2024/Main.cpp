#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *f;
    int *VI1,*VI2,*VI3,F_size=0,i=0;
    double *VD1,*VD2,*VD3;
    float*VF1,*VF2,*VF3;
    char F_tipe_1,F_tipe_2,F_tipe_3;
    // lidiar con archivo 1
    f=fopen("C:\\Users\\alear\\OneDrive\\Escritorio\\Info II\\25-04-2024\\numbers_1.dat","rb");
    if (f==NULL)
    printf("Error al abrir el archivo");

    fread(&F_tipe_1,sizeof(char),1,f);

    if(F_tipe_1=='i')
    {
        fseek(f,0,SEEK_END);
        F_size=(ftell(f)-sizeof(char))/sizeof(int);
        fseek(f,sizeof(char),SEEK_SET);
        VI1=new int [F_size];
        fread(VI1,sizeof(int),F_size,f);
        printf("\n El archivo 1 contiene variables de tipo INT \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %d",i+1,VI1[i]);
        }
        printf ("\n");
        delete[]VI1;
    }
    if(F_tipe_1=='f')
    {
         fseek(f,0,SEEK_END);
        F_size=(ftell(f)-1)/sizeof(float);
        fseek(f,sizeof(char),SEEK_SET);
        VF1=new float [F_size];
        fread(VF1,sizeof(float),F_size,f);
        printf("\n El archivo 1 contiene variables de tipo FLOAT \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %f",i+1,VF1[i]);
        }
        printf ("\n");
        delete[]VF1;
    }
    if(F_tipe_1=='d')
    {
         fseek(f,0,SEEK_END);
        F_size=(ftell(f)-1)/sizeof(double);
        fseek(f,sizeof(char),SEEK_SET);
        VD1=new double [F_size];
        fread(VD1,sizeof(double),F_size,f);
        printf("\n El archivo 1 contiene variables de tipo DOUBLE \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %lf",i+1,VD1[i]);
        }
        printf ("\n");
        delete[]VD1;
    }

    fclose(f);
    
    

    // lidiar con archivo 2
    f=fopen("C:\\Users\\alear\\OneDrive\\Escritorio\\Info II\\25-04-2024\\numbers_2.dat","rb");
    if (f==NULL)
    printf("Error al abrir el archivo");

    fread(&F_tipe_2,sizeof(char),1,f);

    if(F_tipe_2=='i')
    {
        fseek(f,0,SEEK_END);
        F_size=(ftell(f)-1)/sizeof(int);
        fseek(f,sizeof(char),SEEK_SET);
        VI2=new int [F_size];
        fread(VI2,sizeof(int),F_size,f);
        printf("\n El archivo 2 contiene variables de tipo INT \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %d",i+1,VI2[i]);
        }
        printf ("\n");
        delete[]VI2;
    }
    if(F_tipe_2=='f')
    {
         fseek(f,0,SEEK_END);
        F_size=(ftell(f)-1)/sizeof(float);
        fseek(f,sizeof(char),SEEK_SET);
        VF2=new float [F_size];
        fread(VF2,sizeof(float),F_size,f);
        printf("\n El archivo 2 contiene variables de tipo FLOAT \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %f",i+1,VF2[i]);
        }
        printf ("\n");
        delete[]VF2;
    }
    if(F_tipe_2=='d')
    {
         fseek(f,0,SEEK_END);
        F_size=(ftell(f)-1)/sizeof(double);
        fseek(f,sizeof(char),SEEK_SET);
        VD2=new double [F_size];
        fread(VD2,sizeof(double),F_size,f);
        printf("\n El archivo 2 contiene variables de tipo DOUBLE \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %lf",i+1,VD2[i]);
        }
        printf ("\n");
        delete[]VD2;
    }

    fclose(f);
    
    // lidiar con archivo 3
    f=fopen("C:\\Users\\alear\\OneDrive\\Escritorio\\Info II\\25-04-2024\\numbers_3.dat","rb");
    if (f==NULL)
    printf("Error al abrir el archivo");

    fread(&F_tipe_3,sizeof(char),1,f);

    if(F_tipe_3=='i')
    {
        fseek(f,0,SEEK_END);
        F_size=(ftell(f)-1)/sizeof(int);
        fseek(f,sizeof(char),SEEK_SET);
        VI3=new int [F_size];
        fread(VI3,sizeof(int),F_size,f);
        printf("\n El archivo 3 contiene variables de tipo INT \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %d",i+1,VI3[i]);
        }
        printf ("\n");
        delete[]VI3;
    }
    if(F_tipe_3=='f')
    {
         fseek(f,0,SEEK_END);
        F_size=(ftell(f)-1)/sizeof(float);
        fseek(f,sizeof(char),SEEK_SET);
        VF3=new float [F_size];
        fread(VF3,sizeof(float),F_size,f);
        printf("\n El archivo 3 contiene variables de tipo FLOAT \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %f",i+1,VF3[i]);
        }
        printf ("\n");
        delete[]VF3;
    }
    if(F_tipe_3=='d')
    {
         fseek(f,0,SEEK_END);
        F_size=(ftell(f)-1)/sizeof(double);
        fseek(f,sizeof(char),SEEK_SET);
        VD3=new double [F_size];
        fread(VD3,sizeof(double),F_size,f);
        printf("\n El archivo 3 contiene variables de tipo DOUBLE \n");
        printf("\n El archivo contiene %d elementos \n",F_size);
        for (i = 0; i < F_size; i++)
        {
            printf("\n Elemento %d: %lf",i+1,VD3[i]);
        }
        printf ("\n");
        delete[]VD3;
    }

    fclose(f);
    scanf("%d",&i);
    return 0;
}
