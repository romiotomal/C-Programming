/*
Write a C program to find all prime numbers between given intervals using functions.
Example:
Input lower limit: 10
Input upper limit: 50
Output prime numbers between 10-50 are: 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, and 47
*/
#include<stdio.h>
int primes(int x)
{
    if (x <= 1)
        return 0;
for(int i = 2; i <= x / 2; i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int upperl, lowerl;
    printf("Input lower limit : \n");
    scanf("%d", &lowerl);
    printf("Input upper limit : \n");
    scanf("%d", &upperl);

    printf("Prime numbers between %d and %d are: ", lowerl, upperl);
    int a;
    for (int i = lowerl; i <= upperl; i++) {
            a=primes(i);
        if (a==1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
