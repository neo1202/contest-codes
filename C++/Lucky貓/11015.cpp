#include<iostream>
#define INF 2147483647
using namespace std;
int main()
{
	int i,j,k,t;
	int n,m,min;
	int a,b,c;
	string name[30];
	int path[30][30];
	int sum[30];
	t=0;
	while(cin>>n>>m)
	{
		t++;
		if(n==0 and m==0)
			break;
		for(i=1;i<=n;i++)
		{
			cin>>name[i];
		}
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				path[i][j]=INF;
		for(i=1;i<=n;i++)
			path[i][i]=0;
		for(i=1;i<=m;i++)
		{
			cin>>a>>b>>c;
			path[a][b]=path[b][a]=c;
		}
		for(k=1;k<=n;k++)
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(path[i][k]!=INF and path[k][j]!=INF)
					{
						if(path[i][j]>path[i][k]+path[k][j])
						{
							path[i][j]=path[i][k]+path[k][j];
						}
					}
				}
			}
		}
		min=INF;
		for(i=1;i<=n;i++)
		{
			sum[i]=0;
			for(j=1;j<=n;j++)
				sum[i]+=path[j][i];
			if(sum[i]<min)
			{
				min=sum[i];
				a=i;
			}
		}
		cout<<"Case #"<<t<<" : "<<name[a]<<endl;
	}
	
	
	return 0;
}
