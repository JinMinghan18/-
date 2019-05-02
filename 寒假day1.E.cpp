#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int pos1=-1,pos2=-1,pos3=-1,pos4=-1,sum = 0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(s[i]!='['&&s[i]!=']'&&s[i]!=':'&&s[i]!='|')
			s.erase(i,1),i--;
			
	for(int i=0;i<s.length();i++){
		if(s[i] == '[') {
			pos1 = i;
			break;
		}
	}
	for(int i=pos1;i<s.length();i++){
		if(s[i] == ':'){
			pos2 = i;
			break;
		}
	} 
	for(int i=s.length()-1;i>pos2;i--){
		if(s[i] == ']'){
			pos4 = i;
			break;
		}
	} 
	for(int i=pos4;i>pos2;i--){
		if(s[i] == ':'){
		pos3 = i;
		break;
		}
	}
	int cnt=0;
	for(int i=pos2;i<=pos3;i++)
	{
		if(s[i] == '|') cnt++;
	}
	if(pos1>=0&&pos2>=0&&pos3>=0&&pos4>=0){
		sum =cnt+4;
		cout<<sum<<endl;
	}
	else
	{
		cout<<-1<<endl;
	} 
	
		
	}


