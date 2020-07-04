#include <stdio.h>
int gr[20][20],col[20],f[20],d[20],prev[20],n,time=0,topo[20],c=0;

void dfs_visit(int u)
{
    int v;
    col[u]=1;
    time++;
    d[u]=time;
    for(v=1;v<=n;v++)
    {
        if(gr[u][v]==1)
        {
            if(col[v]==0)
            {
                prev[v]=u;
                dfs_visit(v);
            }
        }
    }
    time++;
    f[u]=time;
    col[u]=2;
    topo[c++]=u;
}

void dfs()
{
    int u;
    for(u=1;u<=n;u++)
    {
        col[u]=0;
        prev[u]=-1;
        d[u]=-1;
        f[u]=-1;
    }
    for(u=1;u<=n;u++)
    {
        if(col[u]==0)
            dfs_visit(u);
    }
}


int main()
{
    int i,j,s,de;
    printf("enter number of nodes: ");
    scanf("%d",&n);
    printf("Enter the matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&gr[i][j]);
        }
    }
    dfs();
    printf("Starting time is:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\nFinishing time is:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",f[i]);
    }
    printf("\ntopological sorting is:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",topo[i]);
    }

}


