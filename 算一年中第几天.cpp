#include <stdio.h>
int main()
{
	int lyczz=1; 
    int year,month,day,days=0;
    printf("\n请输入年、月、日，并以空格隔开\n");
    scanf("%d%d%d",&year,&month,&day);

	if(day>31||day<1||month>12||month<0||(year%4==0 && year%100!=0 || year%400==0)&&(day<1||day>29)||(year%4!=0 || year%100==0 && year%400!=0)&&(day<1||day>28))
		{printf("输入数据错误");lyczz=0;} 
	else 
	switch(month) 
    {
    case 1:days=0;break;
    case 2:days=31;break;
    case 3:days=59;break;
    case 4:days=90;break;
    case 5:days=120;break;
    case 6:days=151;break;
    case 7:days=181;break;
    case 8:days=212;break;
    case 9:days=243;break;
    case 10:days=273;break;
    case 11:days=304;break;
    case 12:days=334;break;
    default:lyczz=0; 
    }
   
	days+=day; 
    if((year%4==0 && year%100!=0 || year%400==0) && month>=3)
    days+=1;
    if (lyczz){
	
    printf("\n%d年%d月%d日是这一年的第%d天！\n",year,month,day,days);}
    return 0;
}

