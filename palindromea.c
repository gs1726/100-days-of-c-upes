#include<stdio.h>
    int main()
    { 
        int n,rem,reverse=0,og;
        printf("Enter a number:");
        scanf("%d",&n);
        og=n;
        while(n!=0)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n = n/10;
        }
        if(reverse==og)
        {
            printf("The number is a palindrome");
        }
        else
        {
            printf("The number is not a palindrome");
        }
        return 0;
    }