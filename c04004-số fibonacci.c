#include <stdio.h>
#include <math.h>
int main(){
    int q;
    scanf("%d", &q);
    while(q--) {
    	long long  a[92+1];
    	a[0]=0; a[1]=1;
    	for (int i=2; i<=92; i++) {
    		a[i] = a[i-1] + a[i-2];
    	}
    	int n;
    	scanf("%d", &n);
    	printf("%lld\n", a[n]);
    	
    }
	return 0;
}