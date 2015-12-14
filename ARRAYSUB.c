#include<stdio.h>
#include<stdlib.h>

int maxK(int *data,int k){
	int max = *(data);
	int i=0;
	for(;i<k;i++){
		if(*(data+i)>max){
			max = *(data+i);
		}
	}
	return max;
}


int main(){
	int count;
	scanf("%d",&count);
	int *data = (int*)malloc(sizeof(int)*count);
	int i = 0;
	for(;i<count;++i){
		scanf("%d",data+i);
	}
	int k;
	scanf("%d",&k);
	int round = count - k + 1;
	for(i=0;i<round;++i){
		printf("%d ",maxK(data+i,k));
	}
	printf("\n");
	return 0;
}
