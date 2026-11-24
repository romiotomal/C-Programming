/*Program-6: Write a C program to read the age of a candidate and determine whether it
is eligible for casting his/her own vote.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the age :");
    scanf("%d",&a);
    if(a>=18)
        printf("Eligible");
    else
        printf("Is not eligible");
    return 0;
}
