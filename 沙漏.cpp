#include <stdio.h>
#include <math.h>
int main()
{
	char q;
	int N,left,raw,x[100]={},y[100]={};
	scanf("%d",&N);
	scanf("%c%*c",&q);
	for(int i=1;i<=100;i++)
	{
		x[i]=2*i-1;
		y[i]=pow(i,2)*2-1;
		if (N>y[i]) continue;
		else raw=x[i];	left=N-y[i-1];break;
	}

	
	int halfraw=raw/2;
	for(int i=halfraw;i>0;i--)
	{
		for(int j=halfraw;j>i;j--)
		{
			printf(" "); 
		}
		for(int j=i*2+1;j>0;j--)
		{
			printf("%c",q);
		}
	printf("\n");
	}
	for(int i=0;i<halfraw;i++) printf(" ");
	
	printf("%c",q);
	printf("\n");
	for(int i=0;i<halfraw;i++)
	{
		for(int j=halfraw;j>i+1;j--)
		{
			printf(" ");
		}	
	for(int j=0;j<i*2+3;j++)
	{
	printf("%c",q); 
	}
	printf("\n");	
	}
	printf("%d",left);
}
