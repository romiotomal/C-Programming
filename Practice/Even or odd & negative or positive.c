#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    if (N>0)
        printf("The Number is Positive");
    else if(N<0)
        printf("The Number is Negative");
        else
        printf("The Number is 0");
    if(N%2==0)
        printf(" and Even");
    else
        printf(" and Odd");

}
