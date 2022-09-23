//2. Write a program to calculate the average of numbers stored in an array of size 10.\
Take array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float arr[10],sum=0,avg;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
    {
       scanf("%f",&arr[i]);
       sum += arr[i]; 
    }
    avg = sum/10;
    printf("Average of 10 number is %.2f",avg);
    getch();
    return 0;
}