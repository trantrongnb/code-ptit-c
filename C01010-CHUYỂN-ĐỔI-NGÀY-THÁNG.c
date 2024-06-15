#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a,b,c;
    a=n/365;
    b=(n-365*a)/7;
    c=(n-365*a-7*b);
    printf("%d %d %d",a,b,c);
}