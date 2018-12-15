#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	char a[50][50];
	int way[][2] = {
		{0,-1},
		{-1,0},
		{0,1},
		{1,0}
	}; //¥ª¤W¥k¤U 
	int nowx,nowy,noway;
	while(cin>>n>>noway)
	{
		string ans="";
		int step=1;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		nowx=n/2;
		nowy=n/2;
		for(i=0;i<2*n-1;i++){
			//cout<<step<<endl;
			if(i==2*n-2)
			{
				step-=1;
			}			
			for(j=0;j<step;j++){
				//cout<<nowx<<" "<<nowy<<" "<<ans<<endl;
				ans+=a[nowy][nowx];
				nowx+=way[noway][1];
				nowy+=way[noway][0];
			}
			if(i%2==1){
				step+=1;
			}
			noway=(noway+1)%4;
		}
		cout<<ans<<endl;
	}
	
	
	
	return 0;
}
