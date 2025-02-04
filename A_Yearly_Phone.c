#include<stdio.h>
int main(){

int year,lastDigit,SlastDigit;
scanf("%d",&year);
lastDigit = year - (year/10)*10;
year = year/10;
SlastDigit = year - (year/10)*10;

printf("K%d%d",SlastDigit,lastDigit);
return 0;
}