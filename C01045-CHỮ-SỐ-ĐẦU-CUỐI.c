#include <stdio.h>
#include<math.h>
#include<string.h>
int main(){
  char a[10];
  scanf("%s",a);
  printf("%c %c",a[0],a[strlen(a)-1]);
}