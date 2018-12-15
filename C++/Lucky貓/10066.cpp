#include<iostream> 
using namespace std;
int main()
{
	int n,m,i,j,sum;
	int a[111],b[111];
	int c[111][111];
	sum=0;
	while(cin>>n>>m)
	{
		if(n==0 && m==0)
			break;
		else
		{
			sum++;
			for(i=1;i<=n;i++)
			{
				cin>>a[i];
			}
			for(i=1;i<=m;i++)
			{
				cin>>b[i];
			}
			for(i=0;i<=110;i++)
			{
				c[0][i]=0;
				c[i][0]=0;
			}
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=m;j++)
				{
					if(a[i]==b[j])
					{
						c[i][j]=c[i-1][j-1]+1;
					}
					else
					{
						if(c[i-1][j]>=c[i][j-1])
						{
							c[i][j]=c[i-1][j];
						}
						else
						{
							c[i][j]=c[i][j-1];
						}
					}
				}
			}
			cout<<"Twin Towers #"<<sum<<endl;
			cout<<"Number of Tiles : "<<c[n][m]<<endl;
			cout<<endl;
		}
	}
	return 0;
}
