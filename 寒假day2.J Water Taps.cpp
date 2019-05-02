#include <algorithm>
#include <iomanip>
#include <cstdio> 
#include <cmath>
#define ll long long 
using namespace std;
struct xx
{
	ll a,t;
}m[20010];

bool cmp(xx a,xx b)
{
	return a.t<b.t;
} 
int main()
{

	ll sum1 = 0,sum1_v = 0,sum2 = 0,sum2_v = 0,sum3 = 0,sum3_v = 0;
	int n,T;
	scanf("%d%d",&n,&T);
	for(int i = 0;i < n;i++)
	{
		scanf("%lld",&m[i].a);
	}
	for(int i = 0;i < n;i++)
	{
		scanf("%lld",&m[i].t);
		m[i].t -= T;
		if(m[i].t == 0) sum3 ++,sum3_v +=m[i].a;
		else if(m[i].t<0) sum1 -= m[i].a*m[i].t,sum1_v +=m[i].a;
		else if(m[i].t>0) sum2 += m[i].a*m[i].t, sum2_v +=m[i].a; 
	}
	sort(m,m+n,cmp);
	if((sum1 == 0 && sum3 == 0) || (sum2 == 0  && sum3 == 0) )printf("%d\n",0);
	else 
	{
		int pos1,pos2;
		for(int i = 0;i < n;i++)
		{
			if(m[i].t<0 && m[i+1].t>=0 ) pos1 = i;
			if(m[i].t>0 && m[i-1].t<=0 ) pos2 = i;
		}
		if(sum1 == sum2) printf("%.9lf\n",(double)(sum1_v)),printf("%.9lf\n",(double)sum2_v),printf("%.9lf\n",(double)(sum1_v + sum2_v+sum3_v));
		else if(sum1 < sum2)
		{
			double sum = 0;
			for(int i = n-1;i>=pos2;i--)
			{
				if(sum1-m[i].a*m[i].t>=0)
				{
					sum += m[i].a;
					sum1 -= m[i].a*m[i].t;
					continue; 
				}
				else if(sum1-m[i].a*m[i].t<0)
				{
					sum += (double)sum1/m[i].t;
					break;
				}
			}
			printf("%.9lf\n",(double)(sum1_v)),printf("%.9lf\n",(double)sum2_v),printf("%.9lf\n",(double)sum1_v + sum + sum3_v);
		}
		else if(sum1 > sum2)
		{
			double sum=0;
			for(int i = 0;i<=pos1;i++)
			{
				if(sum2+m[i].a*m[i].t>=0)
				{
					sum += m[i].a;
					sum2 += m[i].a*m[i].t;
					continue;
				}
				else if(sum2+m[i].a*m[i].t<0)
				{
					sum += (double)sum2/m[i].t;
					break;
				} 
			}
			
			printf("%.9lf\n",(double)(sum1_v)),printf("%.9lf\n",(double)sum2_v),printf("%.9lf\n",(double)sum + sum2_v + sum3_v);
		}
	}
} 
