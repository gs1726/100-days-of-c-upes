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