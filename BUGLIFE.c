#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 2001

int col[MAX];
int g[MAX][MAX];

char* result[]={
	"No suspicious bugs found!",
	"Suspicious bugs found!"
};
int dfs(int j,int m){
	int i;
	for(i=1;i<=m;++i){
		//printf("\t\t\tcurrent j=%d i=%d g=%d\n",j,i,g[j][i]);
		if(g[j][i]){
			if(!col[i]){
				col[i] = col[j]^0x11;
				if(dfs(i,m))
					return 1;
			}else if(col[i] == col[j]){
				//printf("\t\t\tgot  j=%d i=%d\n",j,i);
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	int caseNum;
	int i;
	scanf("%d",&caseNum);
	//printf("case num is:%d\n",caseNum);
	for(i=1;i<=caseNum;++i){
		int m,n;
		int j;
		scanf("%d %d",&m,&n);
		//printf("\tm=%d,n=%d\n",m,n);

		memset(col,0,sizeof(int)*MAX);
		memset(g,0,sizeof(int)*MAX*MAX);
		
		for(j=1;j<=n;++j){
			int x,y;
			scanf("%d %d",&x,&y);
			//printf("\t\tj=%d x=%d y=%d\n",j,x,y);
			g[x][y]=g[y][x]=0x1;
		}
		
		int flag = 0;
		for(j=1;j<=m;++j){
			//printf("\tmain col[%d]:%d\n",j,col[j]);
			if(!col[j]){
				col[j] = 0x1;
				if(dfs(j,m)){
					flag = 1;
					//printf("dsf return 1\n");
					break;
				}
			}
			//printf("\t\tcol(%d)=%d\n",j,col[j]);
		}
		printf("Scenario #%d:\n",i);
		printf("%s\n",result[flag]);

	}
	return 0;
}
