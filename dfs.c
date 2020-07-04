#include<stdio.h>
int g[100][100],visited[100],n,s;
void dfs(int i)
{
    int j;
	printf("%d ",i);
    visited[i]=1;

	for(j=0;j<n;j++)
       if(!visited[j]&&g[i][j]==1)
            dfs(j);
}
void main()
{
    int i,j;
    printf("Enter number of vertices : ");
	scanf("%d",&n);
	printf("\nEnter adjecency matrix of the graph : ");
	for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&g[i][j]);
        }
   for(i=0;i<n;i++)
        visited[i]=0;
        printf("Enter source vertex : ");
        scanf("%d",&s);
    dfs(s);
}
