#include <iostream>
#include <iostream> 
using namespace std;
string name[50],num[50];
int n;
int main()
{
	void input_date();
	void search( string find_name);
	string find_name;
	cout<< "plrase input number of this class:";
	cin>>n;
	input_date();
	cout<< "please input name you want find:"; 
	cin>> find_name;
	search( find_name);
	return 0;
}
void input_date()
{
	int i;
	for( i=0; i<n; i++)
	{
		cout<< "input name and NO. if student" << i+1 <<":";
		cin>>name[i] >>num[i];
	}
}
void search(string find_name)
{	 int i;
	bool flag=false;
	for(i=0; i<n ;i++)
	if (name[i]==find_name)
		{ cout <<name[i]<< "has been found,his number is "<<num[i]<<endl;
		  flag=true; break;
		}
		if (flag==false ) cout<<"can't find this name'"; 
}
