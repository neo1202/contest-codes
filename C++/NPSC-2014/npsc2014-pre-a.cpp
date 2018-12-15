#include<iostream>
using namespace std;
int main()
{
	int n,i,t,sum;
	double  AB,H,BB,HBP,TB,SF,up,down;
	while(cin>>n)
	{
		for(t=1;t<=n;t++)
		{
			cin>>AB>>H>>BB>>HBP>>TB>>SF;
			up=  AB*(H + BB + HBP) + TB*(AB + BB + SF + HBP);
			down=AB*(AB + BB + SF + HBP);
			sum=(up/down)*10000;
			//cout<<up<<"  "<<down<<"  "<<sum<<"  "<<endl; 
			cout.setf(ios::fixed); 
			cout.precision(3);
			if((sum%10)>=5)
			{
				cout<<(((1.0*sum-(sum%10))/10)+1)/1000<<endl;
			}
			else
			{
				cout<<((1.0*sum-(sum%10))/10)/1000<<endl;
			}
			
		}
	}
	
	return 0;
}
