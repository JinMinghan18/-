#include<stdio.h>
#include<string.h>
#define max 10000
struct stu
{
    char head,end;
}c[max];
int w[max],flag,f;
void digui(char a)
{
    if(a=='m')
    {
        flag=1;
        return ;
    }
    for(int i=0;i<f;i++)
    {
        if(w[i]==0&&c[i].head==a)
        {
            w[i]=1;//标记
            digui(c[i].end);
            w[i]=0;//清除标记
        }
    }   
}
int main()
{
    char s[max];
    while(scanf("%s",&s)!=EOF)
    {
        if(!strcmp(s,"0"))
          continue;
        f=0;
        c[f].head =s[0];
        c[f].end =s[strlen(s)-1];
        f++;
        while(scanf("%s",&s),strcmp(s,"0"))
        {
            c[f].head =s[0];
            c[f].end =s[strlen(s)-1];
            f++;    
        }
        flag=0;
        for(int i=0;i<f;i++)
        {
            memset(w,0,sizeof(w));
            if(c[i].head =='b')//从首字母是b的单词开始
            {   
                w[i]=1;
                digui(c[i].end);//尾
            }
            if(flag)
               break;
        }
        if(flag)
          printf("Yes.\n");
        else
          printf("No.\n");
    }
}

