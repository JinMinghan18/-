#include <iostream>
using namespace std;

int max_a(int a[],int n) {
int z; 
int i=0;
z=a[i];
for(i=1;i<=(n-1);i++){ 
if(z<=a[i]) z=a[i];  
}
return z; 
} 

double aver(int a[],int n){
double m=0,z;
int i;
for(i=0;i<n;i++){
 m+=a[i];
}
z=m/n;
return z;
}

int p(int a[],int n){
int m=0;
int i;
for(i=0;i<n;i++){

if(a[i]>0) m++;

}
return m;
}


int main(){ 
int b[5];
int i,j; 
for(i=0;i<5;i++) cin>>b[i]; 
   cout<<"最大值为"<<max_a(b,5)<<endl;    
   cout<<"数组内均值为"<<aver(b,5)<<endl;

   cout<<"数组内正数个数为"<<p(b,5)<<endl;
  return 0;
 }
