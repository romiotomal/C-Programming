#include<stdio.h>
void main()
{
    float a,b,c;
    printf("bro..how is going on..tell me the three numbers :\n\n");
    printf("At first please input the value of a:");
    scanf("%f",&a);
    printf("And now please tell the value of b:");
    scanf("%f",&b);
    printf("And lastly tell me the last value of c:");
    scanf("%f",&c);
    if (a>b && a>c)
       printf("the lardge number is a=%30.2f",a);
    else if (b>c && b>a)
        printf("the lardge number is b=%30.2f",b);
    else
         printf("the lardge number is c=%30.2f",c);
    return 0;

}

