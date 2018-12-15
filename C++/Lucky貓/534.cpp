#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n,sx[300],sy[300];
	int i,j,k,t,p;
	int a,b,c;
    double len[300][300];
    p=0;
    while(cin>>n)
    {
    	p++;
    	if(n==0)
    		break;
    	for(i=0;i<n;i++)
		{
			cin>>sx[i]>>sy[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				len[i][j]=len[j][i]=(sx[i]-sx[j])*(sx[i]-sx[j])+(sy[i]-sy[j])*(sy[i]-sy[j]);
			}
		}
		for(k=0;k<n;k++)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					a=len[i][k];
					b=len[k][j];
					if(a<len[i][j] and b<len[i][j])
					{
						len[i][j]=len[j][i]=max(a,b);
					}
				}
			}
		}
		cout<<"Scenario #"<<p<<endl;
		cout<<"Frog Distance = "<<fixed<<setprecision(3)<<sqrt(len[0][1])<<endl;
		cout<<endl;	
	}
	return 0;
} 
