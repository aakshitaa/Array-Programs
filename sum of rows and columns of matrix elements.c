#include<stdio.h>
int main()
{
    int r,c,sum1=0,sum2=0;
    printf("Enter the number rows and columns in the matrix:\n");
    scanf("%d",&r);
    scanf("%d",&c);
    int n[r][c];
    printf("Enter the elements in the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum1+=n[i][j];
        }
        printf("\nThe sum of row %d is: %d",i+1,sum1);
        sum1=0;
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            sum2+=n[j][i];
        }
        printf("\nThe sum of column %d is: %d",i+1,sum2);
        sum2=0;
    }
return 0;
}


