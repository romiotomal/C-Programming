/*Write a function that takes a list of integers as input until you press 9999. Now, find out
the average of these numbers.
Sample input
1 2 3 4 5 6 7 9999
Sample Output
 Avg = 4
 */
#include <stdio.h>
float average()
 {
    int num, sum = 0, count = 0;
    while (1) {
        scanf("%d", &num);
        if (num == 9999)
            break;
        sum += num;
        count++;
    }
    if (count == 0)
        return 0; 
    return (float)sum / count;
}
int main() 
{
    printf("Enter numbers (enter 9999 to stop):\n");
    float avg = average();
    printf("Avg = %f\n", avg);
    return 0;
}
