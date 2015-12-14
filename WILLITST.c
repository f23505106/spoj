#include<stdio.h>
#include<stdlib.h>

int main(){
	long long input;
	scanf("%lli",&input);
	if(input & (input-1)){
		printf("NIE\n");
	}else{
		printf("TAK\n");
	}
}
