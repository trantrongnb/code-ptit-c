#include<stdio.h>
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int d,c;scanf("%d%d",&d,&c);
        int a[d+1][c+1];
        for(int i=1;i<=d;i++){
            for(int j=1;j<=c;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int s=(d+1)*(c+1);
        int cnt[s];
        int h1=1,h2=d,c1=1,c2=c;
        int k=1;
        while(h1<=h2&&c1<=c2){
            for(int i=c1;i<=c2;i++){
                cnt[k]=a[h1][i];
                k++;
            }
            h1++;
            for(int i=h1;i<=h2;i++){
                cnt[k]=a[i][c2];
                k++;
            }
            c2--;
            if(k==d*c+1){
                break;
            }
            if(c1<=c2){
            for(int i=c2;i>=c1;i--){
                cnt[k]=a[h2][i];
                k++;
            }
            }
            h2--;
            for(int i=h2;i>=h1;i--){
                cnt[k]=a[i][c1];
                k++;
            }
            c1++;
        }
         for(int i=1;i<k;i++){
        printf("%d ",cnt[i]);
    }
    printf("\n");
    }
}