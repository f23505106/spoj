#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int count;
	scanf("%d",&count);
	int i;
	char a[16] = {0};
	char b[16] = {0};
	char c[16] = {0};
	char tmp[16] = {0};
	int ia,ib,ic;
	for(i=0;i<count;++i){
		scanf("%s %s %s %s %s",a,tmp,b,tmp,c);
		if(strchr(a,'m')){
			ib = atoi(b);
			ic = atoi(c);
			ia = ic-ib;
		}else if(strchr(b,'m')){
			ia = atoi(a);
			ic = atoi(c);
			ib = ic-ia;
		}else if(strchr(c,'m')){
			ia = atoi(a);
			ib = atoi(b);
			ic = ia+ib;
		}
		printf("%d + %d = %d\n",ia,ib,ic);
	}

	return 0;
}
