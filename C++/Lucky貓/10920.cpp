#include<iostream>
using namespace std;
int main()
{
	int x,n,z,a,b;
	int i,j,k,l,m,p,q,sum;
	while(cin>>x>>n)
	{
		sum=0;
		for(z=1;z*z<n;z+=2);//n在z-1平方+1 跟 z平方之間 
		j=n-z*z;
		k=2*z-1;
		l=k/4;
		for(m=0;m+k<j;m+=k)
			sum++;
		p=m-k;
		q=j-p;
		if(m/k==1)
			cout<<"Line = "<<x<<", column = "<<z-q;
		else if(m/k==2)
			cout<<"Line = "<<z-q<<", column = "<<"1";
		else if(m/k==3)
			cout<<"Line = "<<"1"<<", column = "<<q;
		else
			cout<<"Line = "<<q<<", column = "<<x;
		
	}
	return 0;
}
