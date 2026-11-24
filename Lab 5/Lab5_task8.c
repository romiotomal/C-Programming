#include <stdio.h>

int main() {
    int num, digit, i;
    int count[10] = {0}; 
    int digits[20];      
    int index = 0;    
    printf("Input the number: ");
    scanf("%d", &num);
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        digits[index++] = digit;
        num /= 10;
    }
    printf("The unique elements found in the array are:\n");
    for(i = index - 1; i >= 0; i--) {
        digit = digits[i];
        if(count[digit] == 1) {
            printf("%d ", digit);
            count[digit] = 0; 
        }
    }
    return 0;
}
