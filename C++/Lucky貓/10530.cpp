#include<iostream>
using namespace std;
int main()
{
	int high,low,lie,n;
	int i,j,k;
	string a,b;
	lie=0;
	high=11;
	low=0;
	while(cin>>n)
	{
		if(n==0)
			break;
		cin>>a>>b;
		if(b=="on")
		{
			if(n>=high or n<=low)
			{
				lie=1;
			}
			if(lie==1)
			{
				cout<<"Stan is dishonest"<<endl;
			}
			else
			{
				cout<<"Stan may be honest"<<endl;
			}
			high=11;
			low=0;
			lie=0;
		}
		else if(b=="low")
		{
			if(n>=high)
			{
				lie=1;
			}
			if(n>low)
				low=n;
		}
		else if(b=="high")
		{
			if(n<=low)
			{
				lie=1;
			}
			if(n<high)
				high=n;
		}
	}
	return 0;
} 
