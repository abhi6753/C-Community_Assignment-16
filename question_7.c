//7. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int check(int b[],int);
int main()
{
    int size;
    int arr[size];
    printf("Enter size of array:\n");
    scanf("%d",&size);
    /*printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
     scanf("%d",&arr[i]);*/
    int Largest;
    Largest = check(arr,size);
    printf("Greatest number = %d",Largest);
    getch();
    return 0;
}
int check(int b[],int size )
{
    int i,L;
    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
     scanf("%d",&b[i]);
     L = b[0];
     for(i=1;i<size;i++)
      if(L<b[i])
        L = b[i];
    return L;
}