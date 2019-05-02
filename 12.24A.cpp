#include <iostream>
using namespace std;
bool search(int * a, int n, int key);
int main()
{
	int p[100010]={},n,keyy;
	cin>>n;
	for(int i = 0;i < n;i++) cin>>p[i];
	cin>>keyy;
	if(search(p, n, keyy)) cout<<"yes";
		else cout<<"No";
	
}
bool search(int * a, int n, int key)
{
	
	int *left = a,* right=a + n -1,* mid;
	while(left <= right)
	{
		mid = (right - left)/2+left;
		if(* mid == key) break;
		if(* mid <= key) left = mid+1;
			else right = mid-1;
	}
	if (* mid == key) return true;
		return false;
}
 
