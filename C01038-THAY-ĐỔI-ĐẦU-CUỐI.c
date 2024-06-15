#include <stdio.h>
#include<math.h>
#include<string.h>
int main(){
   char s[10];
   scanf("%s",s);
   char d=s[0];
   s[0]=s[strlen(s)-1];
   s[strlen(s)-1]=d;
   int k=0;
   for(int i=0;i<strlen(s);i++){
    if(s[i]=='0'&&k!=1){
      while(s[i]=='0'){
        i++;
      }
      k++;
    }
    printf("%c",s[i]);
   }
}