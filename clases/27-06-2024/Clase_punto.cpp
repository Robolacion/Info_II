#include "Clase_punto.h"

void complex::print_complex()
{
    if(img>0)
        printf("\n%f+%fj",real,img);
    else
        printf("\n%f%fj",real,img);


}

void complex::set_img(float input){
    scanf("&f",&img);
    img=input;
}
void complex::set_real(float input){
    scanf("&f",&real);
    real=input;
}
