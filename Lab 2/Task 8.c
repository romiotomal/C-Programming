#include <stdio.h>

int main()
{
    float weight1, weight2, quantity1, quantity2;
    float average;


    printf("Enter weight of item 1: ");
    scanf("%f", &weight1);
    printf("Enter quantity of item 1: ");
    scanf("%f", &quantity1);

    printf("Enter weight of item 2: ");
    scanf("%f", &weight2);
    printf("Enter quantity of item 2: ");
    scanf("%f", &quantity2);
   average = ((weight1 * quantity1) + (weight2 * quantity2)) / (quantity1 + quantity2);
   printf("Average value: %.2f\n", average);

    return 0;
}
