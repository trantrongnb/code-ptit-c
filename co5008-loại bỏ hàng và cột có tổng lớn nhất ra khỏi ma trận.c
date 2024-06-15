#include<stdio.h>
#include<math.h>
int a[100][100];
void hmax(int a[100][100],int h,int c){
    int s1=0;
    for(int i=1;i<=c;i++){
        s1+=a[1][i];
    }
    int sh=0,hh=1;
   for(int i=2;i<=h;i++){
      for(int j=1;j<=c;j++){
         sh+=a[i][j];
      }
      if(sh>s1){
        hh=i;
        s1=sh;
      }
      sh=0;
   }
   for(int i=hh;i<h;i++){
    for(int j=1;j<=c;j++){
         int d=a[i+1][j];
         a[i+1][j]=a[i][j];
         a[i][j]=d;
    }
   }
}
void cmax(int a[100][100],int h,int c){
    int s1=0;
    for(int i=1;i<=h;i++){
        s1+=a[i][1];
    }
    int ch=0,cm=1;
    for(int i=2;i<=c;i++){
        for(int j=1;j<=h;j++){
            ch+=a[j][i];
        }
        if(ch>s1){
            cm=i;
            s1=ch;
        }
        ch=0;
    }
    for(int i=cm;i<c;i++){
        for(int j=1;j<=h;j++){
            int d=a[j][i+1];
            a[j][i+1]=a[j][i];
            a[j][i]=d;
        }
    }
}
void xuat(int a[100][100],int h,int c){
    for(int i=1;i<=h;i++){
        for(int j=1;j<=c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int t;scanf("%d",&t);
    for(int cnt=1;cnt<=t;cnt++){
    int h,c;scanf("%d%d",&h,&c);
    for(int i=1;i<=h;i++){
        for(int j=1;j<=c;j++){
            scanf("%d",&a[i][j]);
        }
    }
  hmax(a,h,c);
  cmax(a,h-1,c);
  printf("Test %d:\n",cnt);
  xuat(a,h-1,c-1);
  printf("\n");
}
}