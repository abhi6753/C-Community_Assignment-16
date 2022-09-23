//12. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j;
    printf("Enter row and coloumn of matrix:\n");
    scanf("%d%d",&row,&col);
    int a[row][col],b[col][row];
    printf("Enter %d elements of matrix:\n",row*col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose matrix:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
              b[i][j]=a[j][i];
        }
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}