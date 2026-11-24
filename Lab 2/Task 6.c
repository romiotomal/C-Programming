/*Write a C program that prints the perimeter of a rectangle using its height and width
as inputs.*/
#include<stdio.h>
int main()
{
    float Height,Width,perimeter;
    printf("Enter the value of Height & Width :");
    scanf("%f%f",&Height,&Width);
    perimeter=2*(Height+Width);
    printf("Calculated Perimeter :%.2f unit",perimeter);
    return 0;
}
