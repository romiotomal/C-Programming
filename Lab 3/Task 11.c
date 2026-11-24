/*Program-10: Write a C program to input a character and check that it’s a small letter,
capital letter, a digit or a special symbol.*/
#include<stdio.h>
int main()
{

char ch;
printf("Enter a letter :");
scanf("%c",&ch);
if(ch>='a' && ch <='z')
    printf("Small letter");
else if (ch>='A' && ch<='Z')
printf("Capital latter");
else if(ch>='0' && ch<='9')
     printf("Its a digit");
else
    printf("symbol");
return 0;
}
