#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int caseNum;
	scanf("%d",&caseNum);
	int i;
	for(i=0;i<caseNum;++i){
		int count;
		long long maxLast = 0;
		long long maxLastLast = 0;
		scanf("%d",&count);
		int data;
		int j;

		for(j=0;j<count;++j){
			scanf("%d",&data);
			long long tmp = maxLastLast+data;
			maxLastLast = maxLast;
			if(tmp>maxLast){
				maxLast = tmp;
			}
		}
		printf("Case %d: %lli\n",i+1,maxLast>maxLastLast?maxLast:maxLastLast);
	}

	return 0;
}
