#include<stdio.h>
#include<math.h>
struct tamgiac{
    float m;
    float n;
} a[10];
void check(float cp[]){
     if(cp[0]+cp[1]<=cp[2]||cp[0]+cp[2]<=cp[1]||cp[1]+cp[2]<=cp[0]){
            printf("INVALID\n");
            return ;
        }
        printf("%.3f\n",cp[0]+cp[1]+cp[2]);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        for(int i=1;i<=3;i++){
            scanf("%f%f",&a[i].m,&a[i].n);
        }
        float cp[3];
        int k=0;
        for(int i=1;i<=2;i++){
            for(int j=i+1;j<=3;j++){
              cp[k] =sqrt((a[i].m-a[j].m)*(a[i].m-a[j].m)+(a[i].n-a[j].n)*(a[i].n-a[j].n));
              k++;
            }
        }
       check(cp);
    }
}