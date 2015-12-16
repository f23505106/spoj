#include<stdio.h>

int main(){

	int num;
	scanf("%d",&num);
	while(0 != num){
		int i;
		int sum = 0;
		for(i=1;i<=num;++i){
			sum+=i*i;
		}
		printf("%d\n",sum);
		scanf("%d",&num);
	}
}
