#pragma once
struct My_complex
{
    double real;
    double complex;
};

struct My_complex adder1(struct My_complex z1,struct My_complex z2);

struct My_complex Subs1(struct My_complex z1,struct My_complex z2);

struct My_complex Multi1(struct My_complex z1,struct My_complex z2);

struct My_complex Conjug1(struct My_complex z1);