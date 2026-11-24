/*Write a program in C to display a given number in reverse order.
Test Data :
Input a number: 12345
Expected Output :
The number in reverse order is : 54321  */
#include <stdio.h>

int main()
{
    int num, x = 0, y;

    printf("Input a number: ");
    scanf("%d", &num);

    while (num != 0) {
       y = num % 10;
        x = x * 10 + y;
        num = num/10;
    }

    printf("The number in reverse order is : %d\n", x);
    return 0;
}

