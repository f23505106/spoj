#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char *ops="(+-*/^";

int opPreced(char c){
	return (strchr(ops,c)-ops);
}

int main(){
	int count;
	char stack[400] = {0};
	char buff[400] = {0};
	scanf("%d",&count);
	int i;
	for(i=0;i<count;++i){
		int sp = 0;
		scanf("%s",buff);
		char*index = buff;
		while(*index){
			if(*index < 'a'){
				if('(' == *index){
					stack[++sp] = 0;
				}else if(')' == *index){
					while(0 != stack[sp]){
						printf("%c",ops[stack[sp--]]);
					}
					sp--;
				}else{
					char order = opPreced(*index);
					while(order<stack[sp]){
						printf("%c",ops[stack[sp--]]);
					}
					stack[++sp] = order;
					//printf("debug sp:%d\n",sp);
				}
			}else{
				printf("%c",*index);
			}
			index++;
		}
		while(sp>0){
			printf("%c",ops[stack[sp--]]);
		}
		printf("\n");
	}
}
