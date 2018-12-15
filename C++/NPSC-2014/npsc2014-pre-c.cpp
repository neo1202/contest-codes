#include<iostream>
using namespace std;
int main()
{
	int i,A,B,times,t,j;
	unsigned long long n,sum;
	while(cin>>t)
	{
		for(j=1;j<=t;j++) 
		{
			cin>>n;
			sum=1;
			while(sum<n)
			{
				sum*=2;
			}
			if(sum==n)
			{
				A=1;
				B=1;
			}
			else
			{
				A=1;
				B=sum-(n*A);
			}
			cout<<1<<" "<<B<<endl;
		}
	}
	
	
	
	return 0;
} 
