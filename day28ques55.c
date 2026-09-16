//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(m=2;m<=10;m++)
    {
        if(i%m==0)
        {
            break;
        }
        else 
        {
            printf("%d ",i);
            break;
        }
    }
}
    return 0;
}
