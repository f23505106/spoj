#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    if(n-1 != m){
        printf("NO\n");
        return 0;
    }
    char* data = (char*)malloc(n + 1);
    memset(data,0,n+1);
    int i = 0;
    int x,y;
    for(;i<m;++i){
        scanf("%d %d",&x,&y);
        if(data[x] == 1&&data[y]==1){
            printf("NO\n");
            return 0;
        }else{
            data[x] = 1;
            data[y] = 1;
        }
    }
    printf("YES\n");
    return 0;
}
