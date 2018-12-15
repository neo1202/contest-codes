#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,start[10005],fin[10005];
	int i,j,k,a,b,len,all;
	while(cin>>n)
	{
		len=0;
		for(k=1;k<=n;k++)
		{
			cin>>a>>b;
			for(i=1;i<=len;i++)
			{
				if((a<start[i] and b>=start[i]) or (a<=fin[i] and b>fin[i]))
				{
					a=min(a,start[i]);
					b=max(b,fin[i]);
					start[i]=start[len];
					fin[i]=fin[len];
					len--;
					i--;
				}
			}
			len++;
			start[len]=a;
			fin[len]=b;
		}
		all=0;
		for(i=1;i<=len;i++)
		{
			all=all-start[i]+fin[i];
		}
		cout<<all<<endl;
		
		
		
	}
	
	
	
	
	
	return 0;
} 
