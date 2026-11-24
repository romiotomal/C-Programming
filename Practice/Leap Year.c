#include<stdio.h>
#include<math.h>
int main()                      //Use int main(), not void main()
{
    int year;                    //Year should be an integer
    printf("Enter The year:");
    scanf("%d",&year);
    if(year%400==0)
    printf("Its a leap year");
    else if((year%100!=0)&&(year%4==0))
    printf("Its a leap year");
    else
        printf("Its not a leap year");
        return 0;
}
