#include <iostream>
#include <cmath>
using namespace std;
struct point{
	int x;
	int y;
};
point make_point(int x,int y)
{
	point a;
	a.x=x;
	a.y=y;
	return a;
}
point add_point(point a,point b)
{
	point c;
	c.x=a.x+b.x;
	c.y=a.y+b.y;
	return c;
}
double get_distance(struct point a,struct point b) 
{
	return (sqrt(pow(a.x - b.x,2) + pow((a.y - b.y),2)));

}
int main()
{
	int a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	point d1 = make_point(a1,b1);
	point d2 = make_point(a2,b2);
	point d3 = add_point(d1, d2);
	cout<<d3.x<<' '<<d3.y<<endl;
	cout<<get_distance(d1,d2);

}
