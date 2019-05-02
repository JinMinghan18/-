#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int button[10];
		int label[10];
		int book[10];
		int stage=1;
		int a[10][10],s;
		if(stage==1)
		{
			cin>>s;
			for(int i=1;i<=4;i++)
			{
				cin>>a[stage][i];
				book[a[stage][i]]=i;//记录数字所在的位置 
			}
			if(s==1)
			{
				button[stage]=2;
				label[stage]=a[stage][2];
			}
			else if(s==2)
			{
				button[stage]=2;
				label[stage]=a[stage][2];
			}
			else if(s==3)
			{
				button[stage]=3;
				label[stage]=a[stage][3];
			}
			else if(s==4)
			{
				button[stage]=4;
				label[stage]=a[stage][4];
			}
			stage++;
		}
		//cout<<stage<<endl;
		if(stage==2)
		{
			cin>>s;
			for(int i=1;i<=4;i++)
			{
				cin>>a[stage][i];
				book[a[stage][i]]=i;//记录数字所在的位置 
			}
			if(s==1)
			{
				
				button[stage]=book[4];
				label[stage]=a[stage][book[4]];
			}
			else if(s==2)
			{
				button[stage]=button[1];
				label[stage]=a[stage][button[stage]];
			}
			else if(s==3)
			{
				button[stage]=1;
				label[stage]=a[stage][1];
			}
			else if(s==4)
			{
				button[stage]=button[1];
				label[stage]=a[stage][button[stage]];
			}
			stage++;
		}
		//cout<<stage<<endl;
		if(stage==3)
		{
			cin>>s;
			for(int i=1;i<=4;i++)
			{
				cin>>a[stage][i];
				book[a[stage][i]]=i;//记录数字所在的位置 
			}
			if(s==1)
			{
				button[stage]=book[label[2]];
				label[stage]=a[stage][button[stage]];
			}
			else if(s==2)
			{
				button[stage]=book[label[1]];
				label[stage]=a[stage][button[stage]];
			}
			else if(s==3)
			{
				button[stage]=3;
				label[stage]=a[stage][button[stage]];
			}
			else if(s==4)
			{
				button[stage]=book[4];
				label[stage]=a[stage][button[stage]];
			}
			stage++;
		}
		//cout<<stage<<endl;
		if(stage==4)
		{
			cin>>s;
			for(int i=1;i<=4;i++)
			{
				cin>>a[stage][i];
				book[a[stage][i]]=i;//记录数字所在的位置 
			}
			if(s==1)
			{
				button[stage]=button[1];
				label[stage]=a[stage][button[stage]];
			}
			else if(s==2)
			{
				button[stage]=1;
				label[stage]=a[stage][button[stage]];
			}
			else if(s==3)
			{
				button[stage]=button[2];
				label[stage]=a[stage][button[stage]];
			}
			else if(s==4)
			{
				button[stage]=button[2];
				label[stage]=a[stage][button[stage]];
			}
			stage++;
		}
		//cout<<stage<<endl;
		if(stage==5)
		{
			int t;
			cin>>t;
			//cout<<"stage=5 s="<<t<<endl;
			for(int i=1;i<=4;i++)
			{
				cin>>a[stage][i];
				book[a[stage][i]]=i;//记录数字所在的位置 
			}
			//cout<<"stage=5 s="<<t<<endl;
			if(t==1)
			{
				//cout<<"stage=5 s="<<t<<endl;
				button[stage]=book[label[1]];
				label[stage]=a[stage][button[stage]];
			}
			else if(t==2)
			{
				//cout<<"stage=5 s="<<s<<endl;
				//cout<<"book"<<book[label[2]]<<endl;
				button[stage]=book[label[2]];
				label[stage]=a[stage][button[stage]];
			}
			else if(t==3)
			{
				//cout<<"stage=5 s="<<s<<endl;
				button[stage]=book[label[4]];
				label[stage]=a[stage][button[stage]];
			}
			else if(t==4)
			{
				//cout<<"stage=5 s="<<s<<endl;
				button[stage]=book[label[3]];
				label[stage]=a[stage][button[stage]];
			}
			stage++;
			//cout<<"stage=5 s="<<t<<endl;
		}
		for(int i=1;i<=5;i++)
		{
			cout<<button[i]<<" "<<label[i]<<endl;
		}
	}
	return 0;
}
