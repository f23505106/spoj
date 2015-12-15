#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int a[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
	int count = sizeof(a)/sizeof(a[0]);

	int max = 0;
	int maxSt = 0;
	int maxEd = 0;

	int sum = 0;
	int sumSt = 0;

	int i;
	for(i=0;i<count;++i){
		int data = a[i];
		if(data > 0){
			if(0 == sum){
				sumSt = i;
			}
			sum += data;
			if(sum > max){
				maxSt = sumSt;
				max = sum;
				maxEd = i;
			}
		}else{
			int tmpSum = sum + data;
			if(tmpSum < 0){
				sum = 0;
			}else{
				sum = tmpSum;
			}
		}
	}
	printf("%d-%d : %d-%d sum is:%d\n",maxSt,a[maxSt],maxEd,a[maxEd],max);
}
