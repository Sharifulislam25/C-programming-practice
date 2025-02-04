#include<stdio.h>
int main(){
int number;
scanf("%d", &number);
int lastDigit = number - (number/10)*10;
number = number/10;
int SlastDigit = number - (number/10)*10;
number = number/10;
int firstDigit = number - (number/10)*10;
int firstNumber = firstDigit*100+ SlastDigit*10+ lastDigit;
int secondNumber = SlastDigit*100+ lastDigit*10+ firstDigit;
int thirdNumber = lastDigit*100+ firstDigit*10+ SlastDigit;

int sum = firstNumber+secondNumber+thirdNumber;
printf("%d",sum);



    return 0;
}