
#include<stdio.h>
void main()
{
    float a,b,c,r,s,A1,A2,Area;
    printf("Enter the Three sides value of a Triangle:");
        scanf("%f%f%f",&a,&b,&c);
    printf("Enter the radius of the circle:");
        scanf("%f",&r);
             s=(a+b+c)/2;
             A1=sqrt(s*(s-a)*(s-b)*(s-c));
             A2=3.1416*r*r;
             Area=A1-A2;

    printf("The Area:%f",Area);
    return 0;
}
