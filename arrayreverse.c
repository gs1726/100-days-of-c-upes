#include<stdio.h>
void main()
{
    int n,i,j;
    printf("how many elements do you want in the array");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("enter element %d\n", i+1);
        scanf("%d",&arr[i]);
        
    }
     for (j=n-1;j>=0;j--)
    {
        printf("%d ", arr[j]);
    }
}