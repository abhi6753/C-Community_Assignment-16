//8. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int check(int b[],int);
int main()
{
    int size,smallest;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    smallest = check(arr,size);
    printf("Smallest element = %d",smallest);
    getch();
    return 0;
}
int check(int b[], int size)
{
    int i,small;
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    small = b[0];
    for(i=1;i<size;i++)
    {
        if(small>b[i])
           small = b[i];
    }
    return small;
}