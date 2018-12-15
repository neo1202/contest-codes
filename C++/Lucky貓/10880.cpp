#include<iostream>
using namespace std;
int main()
{
	long long c,g,q,r;     // C 個餅乾，G人，每個人吃了 Q 個餅乾，剩下 R 個餅乾
	int i,j,k,n,t,max,neo;
	while(cin>>t)
	{
		for(j=1;j<=t;j++)
		{
			cout<<"Case #"<<j<<": ";
			neo=0;
			cin>>c>>r;
			if(c==r)
			{
				cout<<"0"<<endl;
			}
			else
			{
				max=c-r;
				for(i=1;i<=max;i++)
				{
					if(max%i==0)
					{
						//max=max/i;
						if(i>=r)
						{
							if(neo==0)
							{
								cout<<i;
							}
							else
							{
								cout<<" "<<i;
							}
							neo++;
						}
						
					}
				}
			}
			cout<<endl;
		}
	}
	
	
	
	
	return 0;
} 
