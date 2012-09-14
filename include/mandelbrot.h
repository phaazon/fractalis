#ifndef MANDELBROT_H
#define MANDELBROT_H

#include <stdbool.h>

struct FR_Mandelbrot_Complex {
  double r;
  double i;
};

typedef struct FR_Mandelbrot_Complex FR_Mandelbrot_Complex;

void FR_Mandelbrot_uv2mandelbrot(double *x, double *y); 
void FR_Mandelbrot_next(FR_Mandelbrot_Complex *zn, FR_Mandelbrot_Complex const *c);
int FR_Mandelbrot_eval(FR_Mandelbrot_Complex const *xy, int maxi);

#endif /* guard */
