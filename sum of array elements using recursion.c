#include<stdio.h>
int sum(int a[],int l);
int sum(int a[],int l)
{
    if(l<=0){
    	return 0;
    }
    else{
    	return a[l-1]+sum(a,l-1);
    }
}
int main()
{
    int l;
    printf("\n Enter the size of the array:");
    scanf("%d",&l);
    int a[l];
    printf(" Enter the array elements:");
    for (int i = 0; i < l; ++i)
    {
    	scanf("%d",&a[i]);
    }
    printf("\n The sum of the array elements: %d",sum(a,l));
    return 0;
}

