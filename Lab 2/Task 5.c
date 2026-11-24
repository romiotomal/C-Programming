/*Write a C program to compute the perimeter and area of a circle with a given radius.*/
#include<stdio.h>
int main ()
{

    float perimeter,area,radius;
    printf("Enter the value of radius :");
    scanf("%f",&radius);
    perimeter=2*3.1416*radius;
    area=3.1416*radius*radius;
    printf("Calculated Perimeter :%.2f unit",perimeter);
    printf("\n& Area :%.2f squre unit",area);
    return 0;
}
