#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t ;
	int i,j,k;
	int s,a,f;
	int x,y;
	int matex[55555],matey[55555]; 
	while(cin>>t)
	{
		while(t--)
		{
			cin>>s>>a>>f;
			x=0;
			y=0;
			for(i=0;i<f;i++)
			{
				cin>>matex[i]>>matey[i];
			}
			sort(matex,matex+f);
			sort(matey,matey+f);
			cout<<"(Street: "<<matex[(f-1)/2]<<", Avenue: "<<matey[(f-1)/2]<<")"<<endl;
		}
	}
	
	return 0;
} 
