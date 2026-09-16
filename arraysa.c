#include<stdio.h>
void main()
{
  int n,sum,i;
  double avg;
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
    avg=sum/n;
    printf("Sum= %d\n",sum);
    printf("Average= %.2f",avg);
}