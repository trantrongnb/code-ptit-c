#include <stdio.h>
#include<math.h>
int main(){
	int t ;
	scanf("%d",&t);
	while (t--){
		int n;scanf("%d",&n);
        if(n<2){
            printf("NO\n");
            
        } else {
            int d=0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
               d++;
               break;
            }
        }
        if(d==0){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
	
	}
    printf("\n");
}
}