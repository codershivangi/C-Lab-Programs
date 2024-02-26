#include<stdio.h>
 int main()
 {
    int a , b, x;
    float s;
    printf("Enter the valuse of a , b , x");
    scanf("%d %d %d", &a,&b,&x);
    s = (a*x+b) / (a*x-b);
    printf(" The value of s = %f", s);
    getch();
 }