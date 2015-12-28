#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int count;
	scanf("%d",&count);
	while(count){
		int buf[1001] = {1002,0};
		int sp = 0;
		int tmp;
		int current = 0;
		int num = count;
		while(num--){
			scanf("%d",&tmp);
			//printf("current:%d,sp:%d,buf[sp]:%d,tmp:%d\n",current,sp,buf[sp],tmp);
			if(current + 1 == tmp){
				++current;
				while(current+1 == buf[sp]){
					--sp;
					++current;
				}
			}else if(tmp<buf[sp]){
				buf[++sp] = tmp;
			}
		
		}
		if(current == count){
			printf("yes\n");
		}else{
			printf("no\n");
		}
		scanf("%d",&count);
	}
	return 0;
}
