#include<stdio.h>
#include<math.h>
#include<string.h>
void  xuli(char a[20],char n){
    int d=0;
   for(int i=0;i<strlen(a);i++){
    if(n==a[i]){d++;}
   }
   if(d>=1){
   printf("%c %d\n",n,d);
}
}
int main(){
    char a[20];
    scanf("%s",a);
    xuli(a,'2');
    xuli(a,'3');
    xuli(a,'5');
    xuli(a,'7');

}