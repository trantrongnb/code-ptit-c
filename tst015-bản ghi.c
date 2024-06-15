#include<stdio.h>
#include<math.h>
struct tamgiac{
    int  a,b,c;
    double s;
} dt[100],cp;
void swap(struct tamgiac *a,struct tamgiac *b){
    cp=*a;
    *a=*b;
    *b=cp;
}
int main(){
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d%d%d",&dt[i].a,&dt[i].b,&dt[i].c);
    for(int i=1;i<=n;i++){
        double cv=(dt[i].a+dt[i].b+dt[i].c)/2;
        dt[i].s=sqrt(cv*(cv-dt[i].a)*(cv-dt[i].b)*(cv-dt[i].c));
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(dt[i].s>dt[j].s){
                swap(&dt[i],&dt[j]);
            }
        }
    }
    for(int i=1;i<=n;i++) printf("%d %d %d\n",dt[i].a,dt[i].b,dt[i].c);
}