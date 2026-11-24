/*Program-8:Write a C program to accept a coordinate point in a XY coordinate system
and determine in which quadrant the coordinate point lies.*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of X & Y :");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
    printf ("First Quadrant");
    else if(x<0 && y>0)
        printf ("Second Quadrant");
     else if(x>0 && y<0)
         printf ("Fourth Quadrant");
      else if(x<0 && y<0)
          printf ("Third Quadrant");
            else if (x==0 &&y==0)
            printf ("Origin");
       else if(x==0 )
           printf ("X Axis");
        else if(y==0)
            printf ("Y Axis");
            else
                printf("Invalid");
    return 0;


}
