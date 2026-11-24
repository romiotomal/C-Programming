/*
Write a C program to print all perfect numbers between given intervals using functions.
[Hint: A perfect number is a positive integer that is equal to the sum of its positive
divisors excluding the number itself.]
Example:
Input lower limit: 1
Input upper limit: 100
Output perfect numbers: 6, 28 */
#include<stdio.h>
int perfect(int num) {
    int sum = 0;
    for (int i = 1; i <=num/2; i++) {
        if (num % i == 0)
            sum += i;
    }
    if(sum == num)
        return num;
    else
        return 0;
}

int main()
{  int upperl,lowerl;
    printf("Input lower limit : \n");
    scanf("%d",&lowerl);
    printf("Input upper limit : \n");
    scanf("%d",&upperl);


printf("Output perfect numbers:\n");
     for (int i = lowerl; i <= upperl; i++) {
        if (perfect(i)) {
            printf("%d ", i);

        }
}



    return 0;
}
