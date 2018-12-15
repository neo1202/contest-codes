#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,time;
	int less,ans,a,b,x,y,start,space,high;
	int neo[21],me[21];
	bool neeo;
	time=0;
	while(cin>>n)
	{
		less=10000;
		high=-1;
		if(n==0)
			break;
		time++;
		for(i=0;i<n;i++)
		{
			cin>>neo[i];
			cin>>a>>b;
			if(neo[i]>high)
				high=neo[i];
			x=b-a;
			me[i]=x;
			y=(10000-neo[i])/x;
			if(y<=less)
			{
				less=y;
				start=neo[i];
				space=x;
			}	
		}
		neeo=1;
		for(i=start;i<10000;i+=space)
		{
			//cout<<i<<" ";
			
			if(i<high)
			{
				continue;
			}
			neeo=0;
			for(j=0;j<n;j++)
			{
				if((i-neo[j])%me[j]!=0)
				{
					neeo=1;
				}
			}
			if(neeo==0 and i>=high)
			{
				break;
			}
		}
		cout<<"Case #"<<time<<":"<<endl;
		if(neeo==1)
		{
			cout<<"Unknown bugs detected."<<endl;
		}
		else
		{
			cout<<"The actual year is "<<i<<"."<<endl;
		}
		cout<<endl;
	}
	
	return 0;
} 
