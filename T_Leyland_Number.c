#include<stdio.h>
#include<math.h>
int main(){
int a,b,ans;
scanf("%d%d", &a, &b);

ans = pow(a,b)+pow(b,a);
        printf("%d",ans);


    return 0;
}