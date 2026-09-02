/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345
*/

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include<stdio.h>
int main()
{
    int i,n,j,k;
    printf("enter no of rows you want to print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}