#include<stdio.h>
int main(){
int total,L,J;
scanf("%d%d", &total, &L);
int remaining = total - L*10;
printf("%d", remaining/20);

    return 0;
}