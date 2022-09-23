//4. Write a program to find the greatest number stored in an array of size 10. Take array\
values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,L;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    L=arr[0];
    for(i=1;i<10;i++)   // loop ka 1 statement iske { } bina v mana jata h
     if(L<arr[i])      //  to if for loop k under mana jaayega or if ka ek statement v { } k bina  v usi ka 
           L = arr[i]; // mana jata hai to L me jo assignment ho rha hai wo if k block ka hai
    printf("Greatest number = %d",L);
    getch();
    return 0;
}