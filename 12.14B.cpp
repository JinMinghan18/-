#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct whouse
{
   double bean;
   double catfood;
   double bizhi;
}
result[10000];

bool cmp(whouse a,whouse b)
{
    return a.bizhi<b.bizhi;
}
int main(){
   int m,n,i;
   double re;
   while(cin>>m>>n&&m!=-1&&n!=-1){
      re=0;
      for(i=0;i<n;i++){
         cin>>result[i].bean>>result[i].catfood;
         result[i].bizhi=result[i].bean/result[i].catfood;
      }
      sort(result,result+n,cmp);
      for(i=n-1;i>=0;i--){
          if(m>=result[i].catfood){
              m-=result[i].catfood;
              re+=result[i].bean;
          }else{
              re+=m*result[i].bizhi;
              break;
          }
      }
      printf("%.3lf\n",re);
   }
}

