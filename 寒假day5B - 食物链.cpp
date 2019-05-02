#include <iostream>
#include <stdio.h> 
using namespace std;
const int maxn = 50005 ;
int par[maxn*3];
int n, k, X, Y, d;
int cnt; 
int find_set(int a)
{
    if( par[a] == a ) return a;
    else return par[a]=find_set(par[a]);
}
 
void make_set(int x, int y)
{
    x = find_set(x);
    y = find_set(y);
    if( x == y ) return ;
    par[y] = x ;
}
 
int main()
{
	scanf("%d%d",&n,&k);
    cnt = 0 ;
    for(int i=1; i<=3*n; i++)
        par[i] = i ;
    while( k-- )
    {
    	scanf("%d%d%d",&d,&X,&Y);
        if( X < 1 || Y < 1 ||Y > n  || X > n || ( X==Y && d==2))
            cnt ++ ;
        else
        {
            if( d == 1 )
            {
                if( find_set(X) == find_set(n+Y)
                   || find_set(X) == find_set(Y+2*n))
                    cnt ++ ;
                else
                {
                    make_set(X,Y);
                    make_set(X+n, Y+n);
                    make_set(X+2*n, Y+2*n);
                }
            }
            else
            {
                if(find_set(X) == find_set(Y) || find_set(Y+2*n)==find_set(X)) cnt ++ ;
                else
                {
                    make_set(X,Y+n);
                    make_set(X+n, Y+2*n);
                    make_set(X+2*n, Y);
                }
            }
        }
    }
    cout << cnt << endl ;
 
    return 0;
}
