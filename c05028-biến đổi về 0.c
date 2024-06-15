#include<stdio.h>
void check(int a[100][100],int i,int j){
    for(int x=0;x<=i;x++){
        for(int y=0;y<=j;y++){
            if(a[x][y]==0) a[x][y]=1;
            else a[x][y]=0;
        }
    }
}
int main(){
    int n;scanf("%d",&n);
    char s[100][100];
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           a[i][j]=s[i][j]-'0';
        }
    }
        int count=0;
  for(int i=n-1;i>=0;i--){
    for(int j=n-1;j>=0;j--){
        if(a[i][j]==1){
            check(a,i,j);
            count++;
        }
    }
   }
   printf("%d",count);
}