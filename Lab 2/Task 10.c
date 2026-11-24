/*Write a C program that accepts an employee&#39;s ID, total worked hours in a month and
the amount he received per hour. Print the ID and salary of the employee for a
particular month.*/
#include<stdio.h>
int main()
{
    int id,h,s,salary;
    printf("Enter Id :");
    scanf("%d",&id);
    printf("Enter working hour in a month :");
    scanf("%d",&h);
    printf("Enter amount you receive per hour :");
    scanf("%d",&s);
    salary=s*h;
    printf("Your Id :%d",id);
    printf("\nYour salary :%d",salary);
    return 0;
}
