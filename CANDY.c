#include<stdio.h>
#include<stdlib.h>

int main(){
    int count;
    scanf("%d",&count);
    while(-1 != count){
        int* data = (int*)malloc(sizeof(int)*count);
        int i = 0;
        int sum = 0;
        for(;i<count;++i){
            scanf("%d",data+i);
            sum+=*(data+i);
        }
        if(sum % count){
            printf("-1\n");
            scanf("%d",&count);
            continue;
        }
        int avg = sum/count;
        int move = 0;
        for(i=0;i<count;++i){
            int diff = *(data+i) - avg;
            move += diff>0?diff:0;
        }
        printf("%d\n",move);
        free(data);
        scanf("%d",&count);
    }
    return 0;
}
