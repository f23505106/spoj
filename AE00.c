#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    //printf("n=%d\n",n);
    int i=1,ii;
    int result = 0;
    for(ii=1;ii<=n;ii=i*i){
        //printf("i=%d result=%d\n",i,result);
        result += n/i-i +1;
        i++;
    }
    printf("%d\n",result);
    return 0;
}
