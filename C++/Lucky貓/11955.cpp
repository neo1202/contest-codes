#include<iostream>
using namespace std;
int main()
{
	int i,j,k,t,n,m,o,x;
	char a[111],b[111],first[111];
	unsigned long long neo[55][55];
	
	for(i=0;i<=50;i++)
	{
		neo[i][0]=1;
		neo[i][i]=1;
		for(j=1;j<i;j++)
		{
			neo[i][j]=neo[i-1][j-1]+neo[i-1][j];
		}
	}
	
	while(cin>>t)
	{
		for(j=1;j<=t;j++)
		{
			cin>>first;
			for(i=1;first[i]!='\0';i++)
			{
				if(first[i]=='+')
				{
					n=i-1;//a程计 
					m=i+1;//b材计 
				}
			}
			o=i-4; //b程计 
			if(first[i-2]>='0' and first[i-2]<='9')
			{
				k=10*(first[i-2]-'0')+first[i-1]-'0';
				o=i-5; //b程计 
			}
			else
			{
				k=first[i-1]-'0';
				o=i-4; //b程计 
			}
			x=0;
			for(i=1;i<=n;i++)
			{
				a[x]=first[i];
				x++;
			}
			a[x]='\0';
			x=0;
			for(i=m;i<=o;i++)
			{
				b[x]=first[i];
				x++;
			}
			b[x]='\0';
			cout<<"Case "<<j<<": ";
			for(i=0;i<=k;i++)   // Case 3: acm^3+3*acm^2*icpc+3*acm*icpc^2+icpc^3
			{
				if(i==0)
				{
					if(k!=1)
					{
						cout<<a<<"^"<<k;
					}
					else
					{
						cout<<a;
					}
					
				}
				else if(i==k)
				{
					if(k!=1)
					{
						cout<<"+"<<b<<"^"<<k;
					}
					else
					{
						cout<<"+"<<b;
					}
					
				}
				else
				{
					if(neo[k][i]==1)
					{
						cout<<"+"<<a;
					}
					else
					{
						cout<<"+"<<neo[k][i]<<"*"<<a;
					}
					if(k-i==1)
					{
						cout<<"*"<<b;
					}
					else
					{
						cout<<"^"<<k-i<<"*"<<b;
					}
					if(i!=1)
					{
						cout<<"^"<<i;
					}
					//cout<<"+"<<neo[k][i]<<"*"<<a<<"^"<<k-i<<"*"<<b<<"^"<<i;
				}
			}
			cout<<endl;
			
		}
	}
	
	
	return 0;
} 
