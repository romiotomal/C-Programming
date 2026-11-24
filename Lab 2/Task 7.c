/*Write a C program that takes hours and minutes as input, and calculates the total
number of minutes.*/
#include<stdio.h>
int main()
{
    int hours,minutes;
    printf("Enter Hour & Minutes :");
    scanf("%d%d",&hours,&minutes);
    minutes=60*hours+minutes;
    printf("Calculates the total number of minutes :%d minutes",minutes);
    return 0;
}
