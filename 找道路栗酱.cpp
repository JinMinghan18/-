#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while (N--)
	{
		int n ,sum=0,temp[100]={0};
		cin>>n;
		for(int i=1; i<n;i++)
		{
			int k;
			cin>>k;
			int saosao[10010]={};
			for(int i=0;i<k;i++) 
			{
				cin>>saosao[i];	
			}
			sort(saosao,saosao+k);
			temp[i]=saosao[0]+saosao[1];
		}
		for(int i=1 ;i<n;i++)
		{
			sum+=temp[i];
		}
		cout<<sum;
	}
	 
} /*描述

栗酱想要出去旅游。她选择了nn个不同的城市，计划旅游的顺序是这样的：从第一个城市到第二个城市，然后是第三个第四个\cdots\cdots??
一直到第n个城市，然后再从第nn个城市回到第n-1n?1个，第n-2n?2个，第n-3n?3个\cdots\cdots??一直到回到第一个城市。

但是每两个城市之间，有很多很多道路，不同的路有不同的长度。

栗酱不希望在一条路上走两遍（因为她想看到更多的风景），但她也想走最少的旅程。

数据保证两个相邻的城市之间至少有两条道路。

请输出最短的总旅行长度。


输入

数据的第一行是数据组数TT。

在每组数据中：第一行是一个整数nn，代表有nn个城市在栗酱的计划中。

接下来的第ii行中，先给出一个整数k_ik 
i
?	 ，表示从第ii个城市到第i+1i+1个城市之间有k_ik 
i
?	 条路。紧接着给出k_ik 
i
?	 个整数a_1,a_2,a_3,\ldots,a_{k_i}a 
1
?	 ,a 
2
?	 ,a 
3
?	 ,…,a 
k 
i
?	 
?	 ——第ii条路的距离。

T \le 100T≤100
n ,k_i \le 1000n,k 
i
?	 ≤1000
1 \le a_i \le 100001≤a 
i
?	 ≤1000 */ 
