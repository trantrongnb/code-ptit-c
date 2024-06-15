#include <stdio.h>
#include<math.h>
int main() {
   float a,b,c;scanf("%f%f%f",&a,&b,&c);
   float dt=b*b-4*a*c;
   if(dt<0){
    printf("NO");
   } else {
   if(dt==0){
    printf("%.2f",-b/2/a);
   } else {
    printf("%.2f %.2f",(-b+sqrt(dt))/2/a,(-b-sqrt(dt))/2/a);
   }}
}