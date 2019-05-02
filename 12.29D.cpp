#include <iostream>
#include<cmath>
using namespace std;

struct point
{
	int x;
	int y;
};
struct rectangle
{
	point p1,p2;
};
int s(rectangle r)
{
	int l = abs(r.p1.x-r.p2.x);
	int k = abs(r.p1.y-r.p2.y);
	return l*k;
}
void move(rectangle r,int X,int Y)
{
	r.p1.x += X;
	r.p2.x += X;
	r.p1.y += Y;
	r.p2.y += Y;
	cout<<r.p1.x<<" "<<r.p1.y<<endl<<r.p2.x<<" "<<r.p2.y<<endl;
}
bool pan(rectangle r,point p)
{
	if((p.x>r.p1.x && p.x<r.p2.x) &&(p.y>r.p2.y && p.y<r.p1.y)) return true;
	return false;
}
int main() 
{
	rectangle r;
	cin>>r.p1.x>>r.p1.y>>r.p2.x>>r.p2.y;
	cout<<"面积："<<s(r)<<endl;
	int X,Y;
	cin>>X>>Y;
	cout<<"移动后";move(r,X,Y);
	point p;
	cin>>p.x>>p.y;
	if(pan(r,p)) cout<<"yes"<<endl;
		else cout<<"No"<<endl;
	 
	 
} 
