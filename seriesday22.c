#include<stdio.h> 
int main() 
{ 
    int n,i;
    float s=0; 
    
    printf("Enter a number:"); 
    scanf("%d",&n); 
    
    for (i=1;i<=n;i++) 
    { 
        if(i==1)
        {
            s=s+1;
        }
        else
        {
            s=s+(float)(2*i-1)/(2*i);
        }
    } 
    
    printf("sum of series: %.1f",s); 
    return 0; 
}