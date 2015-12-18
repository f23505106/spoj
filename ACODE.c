#include<stdio.h>
#include<string.h>

int main(){
	char data[5001] = {0};
	scanf("%s",data);
	while('0' != data[0]){
		long long last1 = 1;
		long long last2 = 1;
		int len = strlen(data);
		int i = len - 2;
		for(;i>=0;--i){
			if('0' == data[i]){
				last2 = last1;
				last1 = 0;
			}else if('0' == data[i+1]){
				last1 =last2;
				last2 = 0;
			}else if(data[i] == '1'||(data[i]=='2'&&'1'<=data[i+1]<='6')){
				long long tmp = last1;
				last1+=last2;
				last2 = tmp;
			}else if('0' == data[i+1]){
				last1 =last2;
				last2 = 0;
			}else{
				last2 = last1;
			}
			//printf("i:%c last1:%lli last2:%lli\n",data[i],last1,last2);
		}
		printf("%lli\n",last1);
	
		scanf("%s",data);
	}

	return 0;
}
