#include<stdio.h>
int main(){
    long long  x, y;
    while(scanf("%lld", &x) == 1 && scanf("%lld", &y) == 1){
        long long l = x, r = y;
        if(l>r){
            int v=l;l=r;r=v;
        }
        int count = 0;
        long long tang = 1;
        while(l < r){
            if(l + tang <= r - tang){
                l = l + tang;
                r = r - tang;
                count = count + 2;
                tang++;
            } else {
               if(l+tang<=r){
                l=l+tang;
                count++;
               } else {
                   count++;
                break;
               }
            }
        }
        printf("%d\n", count);
    }
}