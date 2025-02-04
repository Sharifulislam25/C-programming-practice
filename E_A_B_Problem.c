#include<stdio.h>
int main(){
int a,b;
scanf("%d%d", &a, &b);
printf("%d ", a/b);
printf("%d ", a%b);
printf("%.5lf",(double)a/b);
    return 0;
}