#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k;
	int n,used,notu,pre_use,pre_notu;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0){
			break;
		}
		//used=0;
		//notu=0;
		scanf("%d",&k);
		used=2*k;
		notu=k;
		for(i=1;i<n;i++){
			pre_use=used;
			pre_notu=notu;
			scanf("%d",&k);
			used=pre_notu+2*k;
			notu=max(pre_use,pre_notu+k);
		}
		if(used>notu){
			printf("%d\n",used);
		}
		else{
			printf("%d\n",notu);
		}
		
	}
	
	
	return 0;
}
