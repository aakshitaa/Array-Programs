#include<stdio.h>
    int search(int a[],int n,int target);
    int main()
    {
        int n;
        int target;
        printf("\nEnter the size of the array:");
        scanf("%d",&n);
        int a[n];
        printf("\nEnter the array elements:");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\nEnter the target element:");
        scanf("%d",&target);
        int val=search(a,n,target);
        if(val==-1)
        {
            printf("\nSearch element not found!!");
        }else
        {
            printf("\nTarget element found at %d position",val);
        }
        return 0;
    }
    int search(int a[],int n,int target)
    {
        for(int i=0;i<n;i++)
        {
            if(target==a[i])
            {
                return i+1;
            }
        }
        return -1;
    }
