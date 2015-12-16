#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int count;
	scanf("%d",&count);
	while(count--){
		int n;
		long long result = 0;
		scanf("%d",&n);
		int i;
		for(i=5;i<=n;i*=5){
			result+=n/i;
		}
		printf("%lld\n",result);
	}
	return 0;
}
