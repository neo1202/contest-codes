#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i,j,k;
	int len;
	char x,y;
	char a[222],b[222];
	while(cin>>n)
	{
		for(k=1;k<=n;k++)
		{
			cin>>a;
			len=strlen(a);
			x=a[len-2];
			y=a[len-1];
			if(y=='s' or y=='o' or y=='x' or (x=='s' and y=='h') or (x=='c' and y=='h'))
			{
				cout<<a<<"es"<<endl;
			}
			else if(y=='f')
			{
				for(i=0;i<len-1;i++)
				{
					cout<<a[i];
				}
				cout<<"ves"<<endl;
			}
			else if(x=='f' and y=='e')
			{
				for(i=0;i<len-2;i++)
				{
					cout<<a[i];
				}
				cout<<"ves"<<endl;
			}
			else if(y=='y' and x!='a' and x!='e' and x!='i' and x!='o' and x!='u')
			{
				for(i=0;i<len-1;i++)
				{
					cout<<a[i];
				}
				cout<<"ies"<<endl;
			}
			else
			{
				cout<<a<<"s"<<endl;
			}
		}
	}
	
	
	
	
	
	
	
	return 0;
} 
