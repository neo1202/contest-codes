#include<iostream>
using namespace std;
int main()
{
	unsigned long long a,b;
	long double A,B;
	int i,k;
	while(cin>>a>>b)
	{
		k=1;
		if(a==0 || a==1)
		{
			cout<<"-1"<<endl;
		}
		else if(b==1)
		{
			cout<<"0"<<endl;
		}
		else if(b==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			A=a;
			B=b;
			while(A<=B)
			{
				A*=a;
				k++;
			}
			cout<<k-1<<endl;
			
		}
	}
	
	return 0;
} 
