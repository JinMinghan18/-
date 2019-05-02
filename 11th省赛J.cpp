#include <cmath>
#include <stdio.h>
char s[10][15] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int a[1010];
void ai()
{
	a[1] = 1;
	a[2] = 5;
	for(int i = 3;i<300;i++)
	{
		int ans = i;
		for(int j=1;j<i;j++)	ans = (ans*i)%7;
		a[i] = (ans +a[i-1])%7;
	}
}
int main()
{
	ai();
	int N;
	scanf("%d",&N);
	while (N--)
	{
		int n;
		scanf("%d",&n);
		n%=294;
		printf("%s\n",s[a[n]]);
	} 
} 
