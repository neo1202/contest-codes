#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	int i,j,k;
	int max[10001],neo;
	while(cin>>n)
	{
		sum=0;
		if(n==0)
		{
			break;
		}
		for(i=0;i<n;i++)
		{
			cin>>k;
			sum+=k;
			if(sum<0)
			{
				sum=0;
			}
			max[i]=sum;
		}
		j=-1;
		for(i=0;i<n;i++)
		{
			if(max[i]>j)
			{
				j=max[i];
			}
		}
		if(j>0)
		{
			cout<<"The maximum winning streak is "<<j<<"."<<endl;
		}
		else
		{
			cout<<"Losing streak."<<endl;
		}
	}
	
	
	
	
	return 0;
} 
