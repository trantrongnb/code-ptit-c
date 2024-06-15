#include<stdio.h>
#include<math.h>
void check(double a, double b,double c,double d,double  e,double f){
    double m=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    double n=sqrt((a-e)*(a-e)+(b-f)*(b-f));
    double p=sqrt((c-e)*(c-e)+(d-f)*(d-f));
    if(m+n<=p||m+p<=n||n+p<=m){
        printf("INVALID\n");
        return;
    }
    double t=m+n+p;
    double s=1.0/4*sqrt(t*(t-2*m)*(t-2*n)*(t-2*p));
    printf("%.2lf\n",s);
}
int main(){
    int t;scanf("%d",&t);
    while(t--){
        double a,b,c,d,e,f;scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
        check(a,b,c,d,e,f);
    }
}