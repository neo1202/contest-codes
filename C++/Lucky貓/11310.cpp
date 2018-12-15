#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,t;
	unsigned long long dp[50];
	dp[0]=1;
	dp[1]=1;
	dp[2]=5;
	dp[3]=11;
	for(i=4;i<=40;i++)
	{
		dp[i]=dp[i-1]+4*dp[i-2]+2*dp[i-3];
	}
	while(cin>>t)
	{
		for(k=1;k<=t;k++)
		{
			cin>>n;
			cout<<dp[n]<<endl;

		}
	}

	return 0;
} 
