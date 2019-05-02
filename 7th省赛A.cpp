#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int y1,m1,d1,y2,m2,d2;
		cin>>y1>>m1>>d1>>y2>>m2>>d2;
		if(y1>y2) cout<<"cpcs"<<endl;
		else if(y1<y2) cout<<"javaman"<<endl;
		else{
			if(m1>m2) cout<<"cpcs"<<endl;
			else if(m1<m2) cout<<"javaman"<<endl;
			else {
				if(d1>d2)	cout<<"cpcs"<<endl;
				else if(d1<d2)	cout<<"javaman"<<endl;
				else cout<<"same"<<endl;
			}
		}
	} 
}
