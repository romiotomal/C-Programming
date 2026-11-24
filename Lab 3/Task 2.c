/*Program-1: Write a C++ program to accept two integers and check whether they are
equal or not.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values :\n");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("Both are equal");
    else
        printf("They are not equal");
    return 0;
}
