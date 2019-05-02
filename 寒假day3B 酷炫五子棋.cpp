#include <bits/stdc++.h>
int N,M;
const int maxn = 3e5+10;
using namespace std;
bool a[maxn][maxn] ={}; 
bool check(int x,int y)
{
	if(a[x][y] == a[x+1][y] &&a[x][y] == a[x+2][y] &&a[x][y] == a[x-1][y]&&a[x][y] == a[x-2][y]) return true;
	if(a[x][y] == a[x][y+1] &&a[x][y] == a[x][y+2] &&a[x][y] == a[x][y-1]&&a[x][y] == a[x][y-2]) return true;
	if(a[x][y] == a[x+1][y+1] &&a[x][y] == a[x+2][y+2] &&a[x][y] == a[x-1][y-1]&&a[x][y] == a[x-2][y-2]) return true; 
	if(a[x][y] == a[x-1][y+1] &&a[x][y] == a[x-2][y+2] &&a[x][y] == a[x+1][y-1]&&a[x][y] == a[x+2][y-2]) return true; 
	if(a[x][y] == a[x+1][y] &&a[x][y] == a[x+2][y] &&a[x][y] == a[x+3][y]&&a[x][y] == a[x-1][y]) return true;
	if(a[x][y] == a[x+1][y+1] &&a[x][y] == a[x+2][y+2] &&a[x][y] == a[x+3][y+3]&&a[x][y] == a[x-1][y-1]) return true;
	if(a[x][y] == a[x][y+1] &&a[x][y] == a[x][y+2] &&a[x][y] == a[x][y+3]&&a[x][y] == a[x][y-1]) return true;
	if(a[x][y] == a[x-1][y+1] &&a[x][y] == a[x-2][y+2] &&a[x][y] == a[x-3][y+3]&&a[x][y] == a[x+1][y-1]) return true;
	if(a[x][y] == a[x+1][y] &&a[x][y] == a[x-1][y] &&a[x][y] == a[x-2][y]&&a[x][y] == a[x-3][y]) return true;
	if(a[x][y] == a[x+1][y+1] &&a[x][y] == a[x-1][y-1] &&a[x][y] == a[x-2][y-2]&&a[x][y] == a[x-3][y-3]) return true;
	if(a[x][y] == a[x][y+1] &&a[x][y] == a[x][y-1] &&a[x][y] == a[x][y-2]&&a[x][y] == a[x][y-3]) return true;
	if(a[x][y] == a[x-1][y+1] &&a[x][y] == a[x+1][y-1] &&a[x][y] == a[x+2][y-2]&&a[x][y] == a[x+3][y-3]) return true;
		
}
int main()
{
	int N,M;
	cin>>N>>M;
	
}
