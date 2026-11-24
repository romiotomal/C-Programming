/*
Write a C program to find the power of any number using functions. The power and
base value should be passed as parameter in the function and the calculated result
value should be returned to the caller function.
Example:
Input any number: 5
Input power: 2
Output: 25
*/
#include<stdio.h>

int power(int a,int b)
{
    int result =1;
    for(int i=0;i<b;i++)
    result *=a;
    return result;
}
int main()
{
    int num,pow;
    printf("Enter any number : \n");
    scanf("%d",&num);
    printf("Input Power : \n");
    scanf("%d",&pow);
 
    int a=power(num,pow);
    printf("Output : %d",a);
    return 0;
}

