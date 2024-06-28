#include <stdint.h>
#include <stdio.h>
uint8_t val;
/**
 * @brief Función para mostrar una variable de 8 bites en binario
 * 
 * Esta funcion recive una variable entera de 8 bites y muestra en pantalla/consola el contenido en binario
 * 
 * @returns imprime en consola
 * 
 * @param val entero sin signo de 8 bites (uint8_t)
*/

void Showbin(uint8_t val)
{
    uint8_t aux,bin_cursor=0x80,i;
    for(i=1;i=8;i++)
    {
        aux=val&bin_cursor;
        if (aux!=0)
        printf("1");
        else
        printf("0");
        bin_cursor=bin_cursor>>1;
        if(i%4==0)
        printf(" ");
    }
}

int main(int argc, char const *argv[])
{
    uint8_t val;
    Showbin(val);
    scanf("%d",&val);
    /**
     * @brief facilito
 
    */
}
