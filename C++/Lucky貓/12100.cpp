#include<iostream>
using namespace std;
int main()
{
	int i,j,k,t,ans;
	int n,mine,s_now,l_now;
	int mpoint,place;
	int a[10000],point[10000];
	while(cin>>t)
	{
		for(j=1;j<=t;j++)
		{
			k=0;
			cin>>n>>mine;
			ans=0;
			l_now=n-1;
			s_now=0;
			for(i=0;i<n;i++)
			{
				cin>>point[i];
				a[i]=i;
			}
			while(ans==0)
			{
				k++;
				mpoint=0;
				place=10001;
				for(i=s_now;i<=l_now;i++)
				{
					if(point[i]>mpoint)
					{
						mpoint=point[i];
						place=i;
					}
				}
				if(a[place]==mine)
				{
					ans=1;
					break;
				}
				for(i=s_now;i<place;i++)
				{
					l_now++;
					point[l_now]= point[i];
					a[l_now]=a[i];
				}
				s_now=place+1;
				
				/*cout<<"queue: ";
				for(i=s_now;i<=l_now;i++)
				{
					cout<<point[i]<<" ";
				}
				cout<<endl;*/
				
			}
			cout<<k<<endl;
			
		}
	}

	return 0;
}
