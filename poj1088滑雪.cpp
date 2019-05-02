#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int mp[110][110];
int step[110][110];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int n,m;
bool judge(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m)
		return true;
    return false;
}
int dfs(int x,int y)//当前位置所能到达的最大距离
{
    if(step[x][y])//搜索过的就不用再重新搜索，直接返回其值
        return step[x][y];
    for(int i=0;i<4;i++)
    {
        int nextx=x+dx[i];
        int nexty=y+dy[i];
        if(judge(nextx,nexty)&&mp[nextx][nexty]<mp[x][y])
        {
            int temp=dfs(nextx,nexty)+1;
            if(temp>step[x][y])//四个方向取最大值
                step[x][y]=temp;
        }
    }
    return step[x][y];
}
int main()
{
    cin>>n>>m;
    memset(step,0,sizeof(step));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        	cin>>mp[i][j];
    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            step[i][j]=dfs(i,j);
            if(ans<step[i][j])
                ans=step[i][j];
        }
    cout<<ans+1<<endl;
    return 0;
}

