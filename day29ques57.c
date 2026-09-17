//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include<stdio.h>
void main()
{
  int n,sum,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    sum=0;
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum= %d\n",sum);
}
