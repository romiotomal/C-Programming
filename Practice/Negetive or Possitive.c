#include<stdio.h>
void main()
{
    float n;
    printf("Hey there..how is going.\n\nPlease input a Number :");
    scanf("%f",&n);
    if (n>0)
    printf("The number is positive (+ve) ");
    else if (n<0)
        printf("The number is negative (-ve)");
        else
            printf("The number is 0");
        return 0;


}
