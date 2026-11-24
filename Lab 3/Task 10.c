/*Program-9: Write a C program to input a character and check that it’s a vowel or a
consonant.*/
#include<stdio.h>
int main()
{
    char b;
    printf("Enter the latter :");
    scanf("%c",&b);
    if(b>='a' && b<='z' || b>='A' && b<='Z'){
    if (b=='a' || b=='e' || b== 'i' || b=='o' || b=='u' || b=='A' || b=='E' || b=='I' || b=='O' || b=='U')
        printf("Its a vowel");
    else
        printf("Consonant");
    }
    else
        printf("Unknown cherecter");

    return 0;

}
