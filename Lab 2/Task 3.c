/*Write a program that converts Centigrade to Fahrenheit.*/
#include<stdio.h>
int main()
{
   float centigrade,fahrenheit;
    printf("Enter Centigrade : ");
    scanf("%f",&centigrade);
    fahrenheit=(centigrade*9/5)+32;
    printf("Calculated Fahrenheit : %.2f F",fahrenheit);
    return 0;
}
