#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
	int M,i,j,t,max11,max12;
	int sum[5010];
	char S[5010];
	char P[5010];
	int dp[5010][5010];
	int Plen,Slen;
int main ()
{
	
	while(cin>>P)
	{
		max11=50000;
		max12=0;
		Plen=strlen(P);
		cin>>M;
		for(t=1;t<=M;t++)
		{
			cin>>S;
			Slen=strlen(S);
			for(i=0;i<Plen;i++)
			{
				for(j=0;j<Slen;j++)
				{
					if(P[i]==S[j])
					{
						dp[i][j]=1;
						if(i>=1 and j>=1)
						{
							dp[i][j]=dp[i-1][j-1]+1;
						}
					}
					else 
					{
						dp[i][j]=0;
						if(i>=1)
						{
							dp[i][j]=max(dp[i][j],dp[i-1][j]);
						}
						if(j>=1) 
						{
							dp[i][j]=max(dp[i][j],dp[i][j-1]);
						}
					}
				}
			}
			sum[t]=Slen+Plen-dp[Plen-1][Slen-1];
		}
		for(t=1;t<=M;t++)
		{
			if(sum[t]<max11)
			{
				max11=sum[t];
				max12=t;
			}
		}
		cout<<max12<<" "<<max11<<endl;
	}
	return 0;
} 
