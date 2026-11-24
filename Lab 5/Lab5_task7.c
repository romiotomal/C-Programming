#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int arr[10] = {0};
    int A;
    while (n != 0)
    {
        A = n % 10;
        arr[A]++;
        n = n / 10;
    }

    int count = 0;
    int i;  // declare i
    for(i = 0; i < 10; i++)
    {
        if(arr[i] > 1)
            count+=(arr[i]-1);
    }

    printf("Duplicate elements %d\n", count);

    return 0;
}
