#include<stdio.h>
int main(){
    int p1,t1,p2,t2;
    scanf("%d%d%d%d", &p1, &p2, &t1, &t2);
    int treat1 = p1*t1;
    int treat2 = p2*t2;
    
    printf("%d", treat1+treat2);
    
}