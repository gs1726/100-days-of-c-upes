#include<stdio.h>
int main()
{
    int i,s,m,h;
    printf("Enter the time in seconds: ");
    scanf("%d",&i);
    h=i/3600;
    m=(i%3600)/60;
    s=(i%3600)%60;
    printf("Time in hours, minutes and seconds is: %d:%d:%d",h,m,s);
    return 0;
}