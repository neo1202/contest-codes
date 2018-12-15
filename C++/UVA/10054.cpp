#include<iostream>
using namespace std;

int path[55][55];
int ans[1005];
int al,start,even;

void dfs(int now)
{
	int i;
	//cout<<"now:"<<now<<endl;
	for (i=1;i<=50;i++)
	{
		if(path[now][i]>0)
		{
			path[now][i]--;
			path[i][now]--;
			//cout<<"path:"<< now<<" "<<i<<endl;
			dfs(i);
		}
	}
	ans[al]=now;
	al++;
}

int main()
{
	int t,ti,n,ni,a,b;
	int i,j,k;
	int degree[55];
	while(cin>>t)
	{
		for(ti=1;ti<=t;ti++)
		{
			for(i=0;i<55;i++)
			{
				degree[i]=0;
				for(j=0;j<55;j++)
					path[i][j]=0;
			}
				
			cin>>n;
			ni=n;
			while(ni--)
			{
				cin>>a>>b;
				path[a][b]++;
				path[b][a]++;
				degree[a]++;
				degree[b]++;
				start=b;
			}
			even=1;
			for(i=1;i<=50;i++)
			{
				if(degree[i]%2==1)
				{
					even=0;
				}
			}
			al=0;
			dfs(start);
			if(ti>=2)
				cout<<endl;
			cout<<"Case #"<<ti<<endl;
			if(al==n+1 and ans[0]==ans[n] and even==1)
			{
				for(i=1;i<=n;i++)
				{
					cout<<ans[i-1]<<" "<<ans[i]<<endl;
				}
			}
			else
			{
				cout<<"some beads may be lost"<<endl;
			}
		}
	}
}
 
