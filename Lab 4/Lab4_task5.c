/*Write a program that prints in two columns n even numbers starting from 2, and a
running sum of those values. For example suppose user enters 5 for n, and then the
program should generate the following table: (use only for loops)
Enter n (the number of even numbers): 5

Value Sum
2 2
4 6
6 12
8 20
10 30
*/
#include <stdio.h>
int main()
{
	int i,n,j,sum;
	printf("Enter value of n= ");
		scanf("%d",&n);
 printf("\nValue\tSum\n");
   j=0;
   sum=0;
   printf("\n") ;
for(i=1;i<=n;i++){
    j=j+2;
    sum=sum+j;
    printf("%d\t%d\n", j, sum);

}

	return 0;
}


