#include<iostream>
using namespace std;
int main()
{
	long long sum,r,i,x,y,dist;
	while(cin>>r)
	{
		y=r;
		x=0;
		sum=0;
		while(y>=1)
		{
			dist=x*x+y*y;
			if(dist<=r*r)
			{
				sum+=y;
				x+=1;
			}
			else
				y--;
		}
		cout<<sum*4+1<<endl;
	}
	return 0;	
} 
