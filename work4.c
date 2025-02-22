#include<stdio.h>
int main() {
	int d[999],n,i;
	d[0]=1,d[1]=0;
	scanf("%d",&n);
	if(n==1) {
		return 0;
	} else {
		for(i=2; i<=n; i++) {
			d[i]=(i-1)*(d[i-1]+d[i-2]);
		}
	}
	printf("%d",d[n]);
	return 0;
}
