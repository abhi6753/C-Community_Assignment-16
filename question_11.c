//10. Write a program to calculate the multiplication of two matrices each of order 3x3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    printf("Enter 9 elements of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 9 elements of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Multiplication of two matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][j]*b[k][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d ",c[i][j]);
        }
        printf("\n");
    }
getch();
return 0;
}