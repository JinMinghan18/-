#include<bits/stdc++.h>

using namespace std;
map<string,int>num,wen;
void init()
{
	string a[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string b[] = {"twenty", "thirty", "forty", "fifty", "sixty",
	"seventy", "eighty", "ninety"}; 
	for(int i=0;i<20;i++) num[a[i]] =i;
	for(int i=20,j=0;i<=90;i+=10,j++) num[b[j]] = i;
	wen["hundred"] = 100;
	wen["housand"] = 1000;
	wen["million"] = 1000000;
}
int main()
{
	int N;
	cin>>N;
	init();
	while (N--)
	{
		string str;
		int part[2] = {};
		int ans = 0;
		while(cin>>str)
		{
			char ch = getchar();
			if(num.count(str))
			{
				ans+=num[str];
			}
			else if(str == "hundred")
			{
				ans*= wen[str];
			}
			if(str == "million")
			{
				part[0] = wen[str]*ans;
				ans = 0;
			}
			else if(str == "thousand")
			{
				part[1] = wen[str]*ans;
				ans = 0;
			}
			if(ch == '\n') break;
		}
		 cout<<part[0]+part[1]+ans<<endl;  
	}
}
