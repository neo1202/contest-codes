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
	//���]1~100 �Ĥ@�B�O��51~100�P��50 �����Ʀr�ܦ�1~50 �H������ 
	
	
	
	
	
	return 0;
} 
