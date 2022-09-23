//3. Write a program to calculate the sum of all even numbers and sum of all odd\
numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],even_sum,odd_sum,i;
    even_sum = odd_sum = 0;
    printf("Enter 10 natural number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
          even_sum +=arr[i];
        else
          odd_sum += arr[i];
    }
    printf("Sum of all even number = %d\n",even_sum);
    printf("Sum of all odd number = %d",odd_sum);
    getch();
    return 0;
}