#include<stdio.h>
 int main()
 {
    float principal,rate,time,si,amount;

    printf("Enter the principal:");
    scanf("%f",&principal);
    printf("Enter the rate:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%f",&time);
    si = (principal*rate*time)/100;
    amount = si + principal;

    printf("The simple interest for the given data is %f and the final amount would be %f", si,amount);

    return 0;
 }