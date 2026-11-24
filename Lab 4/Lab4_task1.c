
/*You have to take n numbers of input from keyboard using for loop and print the
numbers*/
#include <stdio.h>
int main()
{
    int i,n,num;
    printf("Enter value of n :");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&num);
printf("You Enter %d\n",num);
}
    return 0;
}
