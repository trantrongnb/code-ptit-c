#include<stdio.h>
struct sinhvien{
    int id;
    char ten[100];
    float a,b,c;
} cp,s[100];
int cout=0;

void swap( struct sinhvien*a,struct sinhvien*b){
    cp=*a;
    *a=*b;
    *b=cp;
}

void add(){
    int n;scanf("%d",&n);
    getchar();
    printf("%d\n",n);
    while(n--){
   s[cout].id=cout+1;
   gets(s[cout].ten);
   scanf("%f%f%f",&s[cout].a,&s[cout].b,&s[cout].c);
   getchar();
   cout++;
}
}

void check(){
    int n;scanf("%d",&n);
    getchar();
    printf("%d\n",n);

    gets(s[n-1].ten);
    scanf("%f%f%f",&s[n-1].a,&s[n-1].b,&s[n-1].c);
}

void display(){
    // for(int i=0;i<cout;i++){
    //     for(int j=i+1;j<cout;j++){
    //         if(s[i].a+s[i].b+s[i].c>s[j].a+s[j].b+s[j].c){
    //             swap(&s[i],&s[j]);
    //         }
    //     }
    // }
    for(int i=0;i<cout;i++){
        if(s[i].a<=s[i].b&&s[i].b<=s[i].c){
        printf("%d %s %.1f %.1f %.1f\n",s[i].id,s[i].ten,s[i].a,s[i].b,s[i].c);
    }
    }
}
int main(){
    int n;
    while(1){
        scanf("%d",&n);
      switch (n){
        case 1:
          add();
          break;
          case 2:
          check();
          break;
          case 3:
          display();
          break;
      }
      if(n==3) break;
         
    }
}