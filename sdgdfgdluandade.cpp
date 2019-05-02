#include<iostream>
using namespace std;
struct xx{
	char name[10];
	int num;
};

void input(xx *a)
{
for(int i=0;i<10;i++)
{cin>>a[i].name;
cin>>a[i].num;
}
}
void paixu(xx *a){
   xx t; int i,j;
   for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
   	        if(a[j].num>a[j+1].num) {
   	 	    t=a[j];
   	 	    a[j]=a[j+1];
   	 	    a[j+1]=t;
		    }
        }
    }

}
int search(xx *a,int m){
	bool f=0;
	int j=9,i=0,n;
	n=(i+j)/2;
	while(i<n){
		if(m==a[n].num) {
			f=1;cout<<f;	
		}
		else if(m<a[n].num) j=n-1;
		else i=n+1;
     	n=(i+j)/2;
	}
	if(f==1) return  n; 
     else return  11;
}

int main()
{ xx zg[10];int i;int zgh,m;
cout<<"请输入十个员工";
input(zg);
paixu(zg);
cout<<"请输入要查找的员工号";
cin>>zgh;
m=search(zg,zgh);

if(m==11) cout<<"zhigonghaocuowu";
else cout<<zg[m].name<<zg[m].num;
}
