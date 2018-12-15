#include<iostream>
using namespace std;
int main()
{
	int n,i,j,left,right,x;
	int a[111];
	while(cin>>n)
	{
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		left=1;
		right=n;
		x=1;
		for(i=left;i<=right;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		while(left!=right)
		{
			if(x%2==1)
			{
				left++;
				for(i=right;i>=left;i--)
				{
					cout<<a[i]<<" ";
				}
			}
			else if(x%2==0)
			{
				right--;
				for(i=left;i<=right;i++)
				{
					cout<<a[i]<<" ";
				}
			}
			cout<<endl;
			x++;
		}
	}
	
	
	
	
	
	
	
	
	return 0;
} 
