#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max2(a,b) ((a)>(b)?(a):(b))

int main(){
    int count,h,w,i,j,k,m;
    scanf("%d",&count);
    for(i=0;i<count;++i){
        scanf("%d %d",&h,&w);
        int size = sizeof(int) * w;
        int *res=(int*)malloc(size);
        memset(res,0,size);
        int max_1=0,max_2 = 0;
        for(j=0;j<h;++j){
            int last;
            for(k=0;k<w;++k){
                scanf("%d",&m);
                int max = res[k]+m;
                if(k>0){
                    max = max2(max,last+m);
                }
                if(k<w-1){
                    max = max2(max,res[k+1]+m);
                }
                last = res[k];
                res[k] = max;
                max_1 = max2(max_1,max);
            }
            max_2 = max2(max_2,max_1);
        }
        printf("%d\n",max_2);
    }
    
    return 0;
}
