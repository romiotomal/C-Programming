/*Program-2: Write a C program to input a number and check whether it is even or odd.
Exercise 4*/
#include<stdio.h>
int main()
{
    int w;
    printf("Enter the Weather value\n");
    scanf("%d",&w);
    if(w%2==0)
        printf("Its even");
    else
         printf("Its odd");
         return 0;
}
