/*
Write a C program to print all even or odd numbers in given range using functions. The
range of numbers should be given as parameters.
Example:
Input range: 10
Output even numbers: 2, 4, 6, 8, 10
Output odd numbers: 1, 3, 5, 7, 9
*/
#include <stdio.h>
void even(int n)
{
int i;
    printf("Enter even NUmbers : \n") ;
    for (i = 2; i <= n; i = i + 2)
    {
        printf(" %d", i);
    }
}
    void odd(int n)
{
int i;
    printf("Enter odd NUmbers : \n") ;
    for (i = 1; i <= n; i = i + 2)
    {
        printf(" %d", i);
    }
    
}
int main()
{
    int n;
     printf("Enter a number : ") ;
     scanf("%d",&n);
     even(n);
     printf("\n");
     odd(n);
    return 0;
}