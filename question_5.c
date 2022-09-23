//5. Write a program to find the smallest number stored in an array of size 10. Take array\
values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,Small=0;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    Small = arr[0];
    for(i=1;i<10;i++)
    {
         if(Small>arr[i])
          Small = arr[i];
    }
    printf("Smallest number = %d",Small);
    getch();
    return 0;    
}