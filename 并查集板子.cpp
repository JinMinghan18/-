//并查集压缩路径
#include<iostream>
#include<cstdio>
using namespace std;
int n,m,num[10005],fa[10005],x,y,z;
int findd(int a)
{
    if(fa[a]==a)
        return a;
    return fa[a]=findd(fa[a]);
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        fa[i]=i;
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d%d",&z,&x,&y);
        if(z==1)
            fa[findd(x)]=findd(y);
        if(z==2)
            if(findd(x)==findd(y))
                cout<<"Y"<<endl;
            else cout<<"N"<<endl;
            }
    return 0;
}

