#include<stdio.h>
#include<string.h>
struct stu
{
    char head,end;
}c[10000];
int w[10000],flag,f;//w数组用来记录是否用过
void digui(char a)
{
    if(a=='m')//看是否到达目标状态
    {
        flag=1;
        return;
    }
    for(int i=0;i<f;i++)
    {
        if(w[i]==0&&c[i].head==a)
        {
            w[i]=1;
            digui(c[i].end);
            w[i]=0;//复原状态 
        }
    }   
}
int main()
{
    char s[10000];
    while(scanf("%s",&s)!=EOF)
    {
        if(!strcmp(s,"0"))
          continue;
        f=0;
        c[f].head =s[0];
        c[f].end =s[strlen(s)-1];
        f++;
        while(scanf("%s,&s"),strcmp(s,"0"))
        {
            c[f].head =s[0];
            c[f].end =s[strlen(s)-1];
            f++;    
        }
        flag=0;
        for(int i=0;i<f;i++)
        {
            memset(w,0,sizeof(w));
            if(c[i].head =='b')//词首为b 
            {   
                w[i]=1;
                digui(c[i].end);//递归词尾 
            }
            if(flag) break;
        }
        if(flag)
        	printf("Yes\n");
        else
          printf("No\n");
    }
    return 0;
}

