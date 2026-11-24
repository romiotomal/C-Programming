/*Write a C program that calculates the volume of a sphere.*/
#include<stdio.h>
int main ()
{
    float Volume,r;
    printf("Enter the value of r :");
    scanf("%f",&r);
    Volume=4/3*3.1416*r*r*r;
    printf ("Calculated Volume :%.2f cube unit",Volume);
    return 0;
}
