#include<stdio.h>
#include<string.h>
void check(){
  char a[21];
  gets(a);
  int s=strlen(a);
  if(s==1){
    printf("YES\n");
    return;
  }
  if(s%2==1){
      int r=s-1,l=0,d=0;
    while(l<=r){
    if(a[l]!=a[r]) d++;
    l++;r--;
  }
  if(d==1||d==0){
    printf("YES\n");
  } else{
    printf("NO\n");
}
  } else {
    int r=s-1,l=0,d=0;
    while(l<=r){
    if(a[l]!=a[r]) d++;
    l++;r--;
  }
  if(d==1){
    printf("YES\n");
  } else{
    printf("NO\n");
}
  }
}
int main(){
  int t;scanf("%d",&t);
  getchar();
  while(t--){
    check();
  }
}