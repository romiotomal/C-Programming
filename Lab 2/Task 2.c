/*Write a C program to compute the perimeter and area of a rectangle with a height of
7 inches and width of 5 inches.*/
#include<stdio.h>
int main()
{
    int height,width,perimeter,area;
    height=7,width=5;
    perimeter=2*(height+width);
    printf("Calculated perimeter :%d inch",perimeter);
    area=height*width;
    printf("\nCalculated area :%d squre inch",area);
    return 0;

}
