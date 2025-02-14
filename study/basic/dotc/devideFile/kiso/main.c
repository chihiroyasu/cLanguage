#include <stdio.h>
#include "calc.h"

int main (int argc, char** argv){
    double d1, d2, d3;
    double a = 1.2, b = 3.4, c = 2.7;
    d1 = avg(a,b);
    d2 = avg(4.1, 5.7);
    d3 = avg(c,2.8);
    printf("d1 = %lf, d2 = %lf, d3 = %lf\n", d1, d2, d3);
    return 0;
}