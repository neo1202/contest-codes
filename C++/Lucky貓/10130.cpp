#include<iostream>
using namespace std;
int main()
{
	int t,n,g,large;
	int i,j,k;
	int weight[1005],price[1005];
	int chart[30005];
	int ans;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			large=0;
			for(i=0;i<n;i++){
				cin>>price[i]>>weight[i];
				large+=weight[i];
			}
			for(i=0;i<=large;i++){
				chart[i]=0;
			}
			for(i=0;i<n;i++){
				int w=weight[i], p=price[i];
				for(j=large;j>=w;j--){
					if(chart[j-w]+p>chart[j]){
						chart[j]=chart[j-w]+p;
					}
				}
			}
			for(i=0;i<=large;i++){
				cout<<i<<":"<<chart[i]<<endl;
			}
			cin>>g;
			ans=0;
			for(i=0;i<g;i++){
				cin>>k;
				ans+=chart[k];
			}
			cout<<ans<<endl;
		}
	}
} 
