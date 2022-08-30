#include<stdio.h>
int insert(int a[],int n);
int delete(int a[],int n);
int main()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int choice;
    printf("Enter 1 for insertion and 2 for deletion: \n");
    scanf("%d",&choice);
    if(choice==1)
    {
        insert(arr,n);
    }
    else if (choice==2)
    {
        delete(arr,n);
    }
    else
    {
        printf("invalid choice! \n");
    }
    return 0;
}
int insert(int arr[],int n)
{
    int index;
    int a;
    printf("Enter the insert index: \n");
    scanf("%d", &index);
    printf("Enter the element to be inserted: \n");
    scanf("%d", &a);
    if(index>n || index<0)
    {
        printf("Operation cannot be performed! \n");
    }
    else
    {
        for (int i = n - 1; i >= index - 1; i--)
    {    
        arr[i+1] = arr[i];
    }
    }
    arr[index-1] = a;
    printf("Array after the operation is: \n");
    for (int i = 0; i <= n; i++)
    { 
        printf("%d ", arr[i]);    
    }
}
int delete(int arr[],int n)
{
    int index;
    int a;
    printf("Enter the delete index: \n");
    scanf("%d", &index);
    if(index>n || index<0)
    {
        printf("Operation cannot be performed! \n");
    }
    else{
        for (int i =index-1; i <n-1; i++)
        {    
            arr[i] = arr[i+1];
        }
        printf("Array after the operation is: \n");
        for (int i = 0; i < n-1; i++)
        { 
            printf("%d ", arr[i]);    
        }
    }
}
