#include<stdio.h>
int a[100001];
void sang(){
    for(int i=0;i<100000;i++){
        a[i]=1;
    }
  a[0]=a[1]=0;
  for(int i=2;i*i<=100000;i++){
    if(a[i]!=0){
        for(int j=i*i;j<=100000;j+=i){
            a[j]=0;
        }
    }
  }
}
int main(){
    sang();
    int b[401];
    int i=0;
    for(int j=0;j<=100000;j++){
        if(a[j]!=0){
            b[i]=j;
            if(i>400){
                break;
            }
            i++;
        }
    }
    int t;scanf("%d",&t);
    for(int cout=1;cout<=t;cout++){
   int n;scanf("%d",&n);
   int ma[n+1][n+1];
   int h1=1,c1=1,h2=n,c2=n;
   int cnt=0;
   while(h1<=h2&&c1<=c2){
    for(int i=c1;i<=c2;i++){
      ma[h1][i]=b[cnt];
      cnt++;
    }
    h1++;
    for(int i=h1;i<=h2;i++){
        ma[i][c2]=b[cnt];
        cnt++;
    }
      c2--;
      if(c1<=c2){
        for(int i=c2;i>=c1;i--){
            ma[h2][i]=b[cnt];
            cnt++;
        }
      }
      h2--;
      for(int i=h2;i>=h1;i--){
        ma[i][c1]=b[cnt];
        cnt++;
      }
      c1++;
   }
   printf("Test %d:\n",cout);
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("%d ",ma[i][j]);
    }
    printf("\n");
   }
   printf("\n");
}
}