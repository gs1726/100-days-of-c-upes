#include<stdio.h>
void main()
{
    int n,i,co=0,ce=0;
    printf("enter no elements you want in an array:");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    printf("Number of even elements: %d\n",ce);
    printf("Number of odd elements: %d\n",co);
}