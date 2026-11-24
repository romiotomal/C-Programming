/*Write a C program to check whether a number is even or odd using functions.
Example:
Input any number: 10
Output: Even*/

#include<stdio.h>
void number(int num)
{
if(num%2==0)
printf("Even");
else
printf("Odd");
}

int main()
{
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    number(num);
   
    return 0;
}