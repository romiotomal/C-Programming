/*Write a program that takes list of integers as input until you press 9999. Now find out
the average of this numbers.*/
#include<stdio.h>
int main()
{
  int n,i,sum;
  float avg;
  printf("Enter values: ");
  i=0;
 sum=0;
 scanf("%d",&n);
  while (n!=9999)
       {
  sum = sum+n;
        i++;
        scanf("%d", &n);
       }
  avg=sum/i;
  printf("Avarage = %.2f",avg);
  return 0;
}
