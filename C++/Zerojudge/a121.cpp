#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,sum,tmp,x;
	int i,j,k;
	while(cin>>a>>b)
	{
		sum=0;
		for(i=a;i<=b;i++)
		{
			x=0;
			tmp=sqrt(i);
			for(j=2;j<=tmp;j++)
			{
				if(i%j==0)
				{
					x=1;
					break;
				}
			}
			if(x==0)
			{
				sum++;
			}
		}
		if(a==1)
		{
			sum--;
		}
		cout<<sum<<endl;
	}
	
	
	return 0;
} 
