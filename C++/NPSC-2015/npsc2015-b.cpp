#include<iostream>
using namespace std;

int main()
{
	long long sum;
	int ans;
	int n,i,j,a[25];
	while(cin>>n)
	{
		ans=1;
		sum=1;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]>=i)
			{
				sum=sum*(a[i]-i+1);
			}
			else 
			{
				ans=0;
			}
		}
		if(ans==1)
			cout<<sum<<endl;
		else
			cout<<"0"<<endl;
	}


	return 0;
}

