/*The Fibonacci sequence is a series where the next term is the sum of pervious two terms. The
first two terms of the Fibonacci sequence is 0 followed by 1.Write a program to print the
following series? For this you have take an integer number as input. */
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
        printf("Fibonacci Series: ");
        for (int i = 1; i <= n; i++)
            {
            if (i == 1)
            {
                printf("%d ", a);

            }
            if (i == 2) {
                printf("%d ", b);

            }
            next = a + b;
            a =b;
            b = next;
            printf("%d ", next);
        }
        printf("\n");


    return 0;
}
