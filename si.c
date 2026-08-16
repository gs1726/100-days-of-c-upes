#include <stdio.h>
#include <math.h>
int main() 
{
    float p,r,t,si,ci,amt;
    printf("Enter the values of p,r,t: ");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    amt=p*(pow(1+(r/100),t));
    ci=amt-p;
    printf("Compound Interest is: %f\n",ci);
    printf("Simple Interest is: %f",si);
    return 0;
}