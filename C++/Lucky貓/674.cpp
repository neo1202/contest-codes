#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	int dp[5][10000];
	int coin[]={1,5,10,25,50};
	for(i=0;i<=7489;i++)
	{
		dp[0][i]=1;
	}
	for(i=1;i<=4;i++)
	{
		for(j=0;j<coin[i];j++)
		{
			dp[i][j]=dp[i-1][j];
		}
		for(j=coin[i];j<=7489;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-coin[i]];
		}
	}
	while(cin>>n)
	{
		cout<<dp[4][n]<<endl;
	}
	
	
	return 0;
}
