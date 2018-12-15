#include<iostream>
using namespace std;
int main()
{
	int x,y,n,a[20][20],b[20][20],max_x,max_y,what,up,down;
	int i,j,k,tmp;
	while(cin>>max_y>>max_x>>n)
	{
		for(y=0;y<max_y;y++)
		{
			for(x=0;x<max_x;x++)
			{
				cin>>a[y][x];
			}
		}
		for(k=1;k<=n;k++)
		{
			cin>>what;
			if(what==1)
			{
				up=max_y-1;
				for(down=0;down<up;down++,up--)
				{
					for(x=0;x<max_x;x++)
					{
						tmp=a[down][x];
						a[down][x]=a[up][x];
						a[up][x]=tmp;
					}
				}
			}
			else 
			{
				for(y=0;y<max_y;y++)
				{
					for(x=0;x<max_x;x++)
					{
						b[x][max_y-y-1]=a[y][x];
					}
				}
				tmp=max_x;
				max_x=max_y;
				max_y=tmp;
				for(y=0;y<max_y;y++)
				{
					for(x=0;x<max_x;x++)
					{
						a[y][x]=b[y][x];
					}
				}
			}
			
			
		}
		cout<<max_y<<" "<<max_x<<endl;
		for(y=0;y<max_y;y++)
			{
				for(x=0;x<max_x;x++)
				{
					if(x==max_x-1)
					{
						cout<<a[y][x];
					}
					else
					{
						cout<<a[y][x]<<" ";
					}
					
				}
				cout<<endl;
			}
	}
	
	
	
	
	
	
	return 0;
} 
