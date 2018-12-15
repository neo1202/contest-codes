#include<iostream>
using namespace std;

int f(int x, int y)
{
	if(y==1)
	{
		return x;
	}
	else 
	{
		return x*f(x,y-1);
	}
	
	
	
	
}



int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		cout<<f(a,b)<<endl;
	}
	
	
		return 0;
} 
