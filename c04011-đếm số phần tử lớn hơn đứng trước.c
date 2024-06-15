#include <stdio.h>
#include <math.h>
#include<stdbool.h>
bool sosanh(int a[], int n, int x) {
	for (int i=0; i<n; i++) {
		if (x<a[i]) return false;}
		return true;
	}
		
int main(){
	int q;
	scanf("%d", &q);
	while(q--) {
	int n;
	scanf("%d", &n);
	int a[50];
	int k=1;
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	} 
	for (int i=1; i<n; i++) {
			if (sosanh(a, i, a[i])) k++;
	}
	printf("%d\n", k);			
	}	
		return 0;
	}