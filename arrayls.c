// does'nt work for even no elemts arrays
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,l,s;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
        l= arr[n/2];
        s=l;
        if (arr[i]>l)
        {
            l=arr[i];
        }
        if (arr[i]<s)
        {
            s=arr[i];
        }
    }
    printf("Largest element: %d\n",l);
    printf("Smallest element: %d\n",s);
}
