#include "My_complex.h"
#include <stdio.h>
struct My_complex adder1( struct My_complex z1,struct My_complex z2)
{   
    struct My_complex Suma;  
    Suma.real=z1.real+z2.real;
   Suma.complex=z1.complex+z2.complex;
 return Suma ;
}

struct My_complex Multi1(struct My_complex z1,struct My_complex z2)
{
float real,imag;
struct My_complex a1;
real=z1.real*z2.real-z1.complex*z2.complex;
imag=z1.real*z2.complex+z2.real*z1.complex;
a1.real=real;
a1.complex=imag;
return a1;
}

struct My_complex Conjug1(struct My_complex z1)
{
    z1.complex=-1*z1.complex;
    return z1;
}
struct My_complex Subs1(struct My_complex z1,struct My_complex z2)
{   
     struct My_complex a1;   
    a1.real=z1.real-z2.real;
   a1.complex=z1.complex-z2.complex;
 return a1 ;
}
