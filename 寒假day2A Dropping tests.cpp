#include <stdio.h>
#include <iostream>
#include <cmath>
#define eps 1e-7
#define ll long long 
#include <algorithm>
using namespace std;
int n,k;
int a[1010], b[1010];
double c[1010];
bool check(double x)
{
	for(int i = 0;i<n;i++)
	{
		c[i] = a[i] - x/100 * b[i];
	}
	sort(c,c+n);
	double sum = 0;
	for(int i=0;i<n-k;i++)
	{
		sum += c[n-1-i];
	}
	return sum >= 0; 
} 
int main()
{	
	while(scanf("%d%d",&n,&k) &&(n+k))
	{
		double l = 0,r = 105,mid;
		for(int i=0;i<n;i++)	scanf("%d",&a[i]);
		for(int i=0;i<n;i++)	scanf("%d",&b[i]); 
		int i = 100;
		while(i--)
		{
			mid = (r+l)/2;
			if(check(mid))
				l = mid;
			else 
				r = mid;
		}
		printf("%.0f\n",r);

	}
}
