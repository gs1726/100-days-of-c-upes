//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
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
