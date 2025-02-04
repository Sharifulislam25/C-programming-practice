#include<stdio.h>
#include<math.h>


int main(){
int r;
scanf("%d", &r);
double a = M_PI*r*r;
double c = 2*M_PI*r;
printf("%.6lf %.6lf", a, c);
    return 0;
}