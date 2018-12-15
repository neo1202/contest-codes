#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int sum,a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		if(a==0 and b==0 and c==0 and d==0 and e==0 and f==0)
		{
			break;
		}
		sum=0;
		//6
		sum=sum+f+(c/4);
		f=0;
		c=c%4;
		
		//5
		if(a>11*e)
		{
			a=a-11*e;
		}
		else
		{
			a=0;
		}
		sum+=e;
		e=0;
		
		//4
		if(b>5*d)
		{
			b=b-5*d;
		}
		else
		{
			if(a>20*d-b*4)
			{
				a=a-20*d+b*4;
				b=0;
			}
			else
			{
				a=0;
				b=0;
			}
		}
		sum=sum+d;
		//3
		if(c==1)
		{
			if(b>5)
			{
				b=b-5;
				a-=7;
			}
			else
			{
				a=a-(27-4*b);
				b=0;
			}
		}
		else if(c==2)
		{
			if(b>3)
			{
				b=b-3;
				a-=6;
			}
			else
			{
				a=a-(18-4*b);
				b=0;
			}
		}
		else if(c==3)
		{
			if(b>1)
			{
				b=b-1;
				a-=5;
			}
			else 
			{
				a=a-(9-4*b);
				b=0;
			}
		}
		if(c!=0)
		{
			sum+=1;
		}
		k=0;
		if(b>0)
		{
			sum=sum+b/9;
			b%=9;
			if(b>0)
			{
				a=a-(36-4*b);
			} 
		}
		if(a>0)
		{
			sum+=a/36;
			a%=36;
			if(a>0)
			{
				sum++;
			}
		}
		
		cout<<sum<<endl;
	}
	
	
	
	
	
	
	return 0;
} 
