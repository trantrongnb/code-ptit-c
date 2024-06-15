void giam(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    }
}
void tang(int a[],int n){
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int d=a[i];
                a[i]=a[j];
                a[j]=d;
            }
        }
    }
}
int main(){
    int t;scanf("%d",&t);
    for(int cnt=1;cnt<=t;cnt++){

   int n;scanf("%d",&n);
   int a[n],b[n];
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   for(int i=0;i<n;i++) scanf("%d",&b[i]);
   tang(a,n);
   giam(b,n);
     int s[2*n];
     int d=0;
     for(int i=0;i<n;i++){
        s[d]=a[i];
        d+=2;
     } int k=1;
     for(int i=0;i<n;i++){
        s[k]=b[i];
        k+=2;
     }
     printf("Test %d:\n",cnt);
     for(int i=0;i<2*n;i++){
        printf("%d ",s[i]);
     }
     printf("\n");
    }
}