#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
	int t,n,i,j,k,sum;
	int a[20005];
	
	//cout << &a <<" " << &a[0] <<" " << &a[1] << " " << a+2 <<endl; 
	while(cin>>t)
	{
		while(t--)
		{ 
			sum=0;
			cin>>n;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			sort(a,a+n);
			for(i=n;i>=3;i-=3)
			{
				sum+=a[i-3];
			}
			cout<<sum<<endl;
		}
	}

	
	return 0;
}
