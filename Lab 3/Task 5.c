/*Program-5: Write a C program to input a number and check whether it is positive or
negative.*/
#include<stdio.h>
int main()
{
    float n;
    printf("Please input a Number :");
    scanf("%f",&n);
    if (n>0)
    printf("The number is positive (+ve) ");
    else if (n<0)
        printf("The number is negative (-ve)");
        else
            printf("The number is 0");
        return 0;


}
