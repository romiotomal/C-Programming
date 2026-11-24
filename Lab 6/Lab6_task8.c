/*Write a C program to print all Armstrong numbers between given intervals using
functions.
[Hint: An Armstrong number is an n-digit number that is equal to the sum of the n-th
powers of its digits.]
Example:
Input:
Enter any number: 371
Output:
The 371 is an Armstrong number.
*/
#include <stdio.h>
int armstrong(int n)
 {
    int original = n;
    int digits = 0, sum = 0;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit*digit*digit;
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int lower, upper;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (armstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
