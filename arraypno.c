#include<stdio.h>
int main()
{
    int i,n,j,cp=0,cn=0,co=0;
    printf("enter no of elemets you want to add in your array");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for (i=0;i<=n;i++)
    {
       scanf("%d",&arr[i]);

    }
    for (j=0;j<=n;j++)
    {
      if (arr[j]>0)
      {
        cp++;
      }
      if (arr[j]<0)
      {
        cn++;
      }
      if (arr[j]==0)
      {
        co++;
      }

    }
    printf ("no of positive elemets in array is: %d\n",cp);
    printf("no of negative elememts in array is: %d\n",cn);
    printf("no of zeroes in array is: %d\n",co);
}