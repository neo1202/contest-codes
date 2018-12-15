#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string line;
	stringstream sin;
	int neo[3];
	int a,b,c,d,i;
	int n;
	int count,z;
	while(getline(cin,line))
	{
		sin.clear();
		sin.str(line);
		count=0;
		while(sin>>neo[count])
		{
			count++;
		}
		if(count==1)
		{
			if((neo[0]+2)%4==0)
			{
				cout<<"Bachelor Number."<<endl; 
			}
			else
			{
				if(neo[0]%2==0)
				{
					a=2;
					b=neo[0]/2;
				}
				else
				{
					a=1;
					b=neo[0];
				}
				c=(a+b)/2;
				d=(a-b)/2;
				if(c<0)
					c*=-1;
				if(d<0)
					d*=-1;
				cout<<c<<" "<<d<<endl;
			}
		}
		else
		{
			while((neo[0]+2)%4!=0)
			{
		   		neo[0]++;
			}
			while((neo[1]+2)%4!=0)
			{
				neo[1]--;
			}
			z=(neo[1]-neo[0])/4+1;
			cout<<z<<endl;
		}
	}
	
	return 0;
} 
