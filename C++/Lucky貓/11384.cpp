#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,j,k;
	int step;
	while(cin>>n)
	{
		step=0;
		while(n>1)
		{
			if(n%2==0)
			{
				n/=2;
			}
			else if(n%2==1)
			{
				n=(n-1)/2;
			}
			step++;
		}
		step++;
		cout<<step<<endl;
	}
	//假設1~100 第一步是把51~100同減50 全部數字變成1~50 以此類推 
	
	
	
	
	
	return 0;
} 
