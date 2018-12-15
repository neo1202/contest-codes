#include<iostream>
int n,m;
int v[55][55];
bool visited [55][55];
int dfs(int x,int y,int candy,int hp)
{
	if(hp>0)
	{
		int ans=candy+v[x][y];
		int tmp;
		if(x-1>=0 and visited[x-1][y]==0)
		{
			visited[x-1][y]=1;
			tmp=dfs(x-1,y,candy+v[x][y],hp-1);
			visited[x-1][y]=0;
			if(tmp>ans)
			{
				ans=tmp;
			}
		}
		if(y+1<m  and visited[x][y+1]==0)
		{
			visited[x][y+1]=1;
			tmp=dfs(x,y+1,candy+v[x][y],hp-1);
			visited[x][y+1]=0;
			if(tmp>ans)
			{
				ans=tmp;
			}
		}
		if(x+1<n  and visited[x+1][y]==0)
		{
			visited[x+1][y]=1;
			tmp=dfs(x+1,y,candy+v[x][y],hp-1);
			visited[x+1][y]=0;
			if(tmp>ans)
			{
				ans=tmp;
			}
		}
		if(y-1>=0 and visited[x][y-1]==0)
		{
			visited[x][y-1]=1;
			tmp=dfs(x,y-1,candy+v[x][y],hp-1);
			visited[x][y-1]=0;
			if(tmp>ans)
			{
				ans=tmp;
			}
		}
		return ans;
	}
	else
	{
		return candy+v[x][y];
	}
	
}


using namespace std;
int main()
{
	int t,i,j,big,tmp;
	while(cin>>t)
	{
		while(t--)
		{
			big=0;
			cin>>n>>m;
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					cin>>v[i][j];
					visited[i][j]=0;
				}
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					visited[i][j]=1;
					tmp=dfs(i,j,0,3);
					if(tmp>big)
						big=tmp;
					visited[i][j]=0;
				}
			}
			cout<<big<<endl;
		}
	}
	
	
	
	
	
	
	return 0;
} 
