#include<iostream>
using namespace std;

int peo[50005],yes[50005],count;

void look(int now)
{
	yes[now]=1;
	if(yes[peo[now]]==0){
		look(peo[now]);
	}
	else{
		count+=1;
	}
}

int main()
{
	int n,i,j,k;
	while(cin>>n)
	{
		count=0;
		for(i=0;i<n;i++){
			cin>>peo[i];
			yes[i]=0;
		}
		for(i=0;i<n;i++){
			if(yes[i]==1){
				continue;
			}
			else{
				look(i);
			}
		}
		cout<<count<<endl;
	}
	
	
	
	return 0;
}
