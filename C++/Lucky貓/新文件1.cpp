#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int c,g,q,r,n;
	int i,j,k,k2;
	int can,a;
	int ans1[100000],ans2[100000];
	while(cin>>n)
	{
		for(j=1;j<=n;j++)
		{
			cin>>c>>r;
			can=c-r;
			a=sqrt(can);
			k=0;
			k2=0;
			for(i=1;i<=a;i++)
			{
				if(can%i==0)
				{
					if(i>r)
					{
						ans1[k]=i;
						k++;
					}
					if(can/i>r and i!=can/i)
					{
						ans2[k2]=can/i;
						k2++;
					}
					
				}
			}
			cout<<"Case #"<<j<<": ";
			for(i=0;i<k;i++)
			{
				cout<<ans1[i]<<" ";
			}
			for(i=k2-1;i>=0;i--)
			{
				if(i!=0)
				{
					cout<<ans2[i]<<" ";
				}
				else 
				{
					cout<<ans2[i];
				}
			}
			cout<<endl;
		}
		
	}
	
	
	
	return 0;
} 
