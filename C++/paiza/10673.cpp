#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int x,k,p,q,n;
	int i,j,t;
	while(cin>>t)
	{
		for(j=1;j<=t;j++)
		{
			cin>>x>>k;
			if(x%k==0)
			{
				cout<<"0 "<<k<<endl;
			}
			else
			{
				//p*(x/k)+q(x/k+1)=x;
				if(x/k==0)
				{
					cout<<"0 "<<x<<endl;
				}
				else
				{
					q=x%(x/k);
					p=x/(x/k)-q;
					cout<<p<<" "<<q<<endl;
				}
			}
		}
	}
	return 0;
}
