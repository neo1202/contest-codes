#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> children[100005];
int parent[100005];
long long allh;

int countHeight(int current){
	if(children[current].size()==0){
		return 0;
	}
	int mh=0;
	for(int i=0;i<children[current].size();i++){
		int child=children[current][i];
		mh=max(mh, countHeight(child));
	}
	allh=allh+1+mh;
	return mh+1;
}

int main()
{
	int t,i,j,n;
	while(cin>>n){
		for(i=1;i<=n;i++){
			parent[i]=-1;
		}
		
		for(i=1;i<=n;i++)
		{
			children[i].clear();
			cin>>j;
			while(j--)
			{
				cin>>t;
				parent[t]=i;
				children[i].push_back(t);
			}
		}
		
		int root;
		for(i=1;i<=n;i++){
			if(parent[i]==-1){
				root=i;
				break;
			}
		}
		allh=0;
		countHeight(root);
		cout<<root<<endl;
		cout<<allh<<endl;
	}

	return 0;
}
