#include<stdio.h>
#include<string.h>

int main(){
	//printf("%d\n",0%10);
	int count;
	scanf("%d",&count);
	int i,j;
	for(i=0;i<count;++i){
		int a,b,r;
		char t[11]={0};
		scanf("%d %d",&a,&b);
		//printf("a:%d b:%d\n",a,b);
		r = a%10;
		//printf("r:%d\n",r);
		if(b == 0){
			printf("1\n");
			continue;
		}
		if(r == 0){
			printf("0\n");
			continue;
		}else if(r == 1){
			printf("1\n");
			continue;
		}else if(r == 5){
			printf("5\n");
			continue;
		}else if(r == 6){
			printf("6\n");
			continue;
		}
		j = 1;
		while(!strchr(t+1,r)){
			t[j] = r;
			r=(r*a)%10;
			j++;
		}
		j--;
		t[0] = t[j];
		//printf("j:%d\n",j);
		printf("%d\n",t[b%j]);
	}
	return 0;
}
