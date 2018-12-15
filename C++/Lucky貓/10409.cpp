#include<iostream>
using namespace std;
int main()
{
	int north,south,east,west,up,down;
	int t,i,j,k,tmp;
	string a;
	while(cin>>t)
	{
		if(t==0)
		{
			break;
		}
		up=1;
		north=2;
		west=3;
		east=4;
		south=5;
		down=6;
		for(j=1;j<=t;j++)
		{
			cin>>a;
			if(a=="north")
			{
				tmp=up;
				up=south;
				south=down;
				down=north;
				north=tmp;
			}
			else if(a=="south")
			{
				tmp=south;
				south=up;
				up=north;
				north=down;
				down=tmp;
			}
			else if(a=="east")
			{
				tmp=east;
				east=up;
				up=west;
				west=down;
				down=tmp;
			}
			else if(a=="west")
			{
				tmp=west;
				west=up;
				up=east;
				east=down;
				down=tmp;
			}
		}
		cout<<up<<endl;
	}
	
	
	
	
} 
