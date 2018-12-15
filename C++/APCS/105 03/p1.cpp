#include<iostream>
using namespace std;
int main()
{
	int n,now,good,bad;
	int i,j,k,tmp,small;
	int a[22];
	while(cin>>n)
	{
		good=101;
		bad=-1;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>bad and a[i]<60)
			{
				bad=a[i];
			}
			else if(a[i]<good and a[i]>=60)
			{
				good=a[i];
			}   
		}
		for(now=0;now<n;now++)
		{
			for(i=now+1;i<n;i++)
			{
				if(a[i]<a[now])
				{
					tmp=a[now];
					a[now]=a[i];
					a[i]=tmp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(i==n-1)
			{
				cout<<a[i]<<endl;
			}
			else
			{
				cout<<a[i]<<" ";
			}
		}
		if(bad!=-1)
		{
			cout<<bad<<endl;
		}
		else if(bad==-1)
		{
			cout<<"best case"<<endl;
		}
		if(good!=101)
		{
			cout<<good<<endl;
		}
		else if(good==101)
		{
			cout<<"worst case"<<endl;
		}
		
	}
	
	
	
	
	
	
	
	
	return 0;
} 
