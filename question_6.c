//6. Write a program to sort elements of an array of size 10. Take array values from the\
user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5],i=0,j=i,temp;
    printf("Enter 5 number:\n");
    for(i=0;i<5;i++)
       scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
    { 
        j++;
        if(arr[i]>arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j]=temp;
        }
    }
    for(i=0;i<5;i++)
    printf("%d ",arr[i]);
}
