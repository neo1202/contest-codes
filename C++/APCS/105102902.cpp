#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,sum;
	int i,j,k,max;
	int ans[30],out[30],q;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		sum=0;
		for(i=0;i<n;i++){
			max=-1;
			for(j=0;j<m;j++){
				scanf("%d",&q);
				if(q>max){
					max=q;
				}
			}
			sum+=max;
			ans[i]=max;
		}
		k=0;
		for(i=0;i<n;i++){
			if(sum%ans[i]==0){
				out[k]=ans[i];
				k+=1;
			}
		}
		printf("%d\n",sum);
		if(k==0){
			printf("-1\n");
		}
		else{
			for(i=0;i<k-1;i++){
				printf("%d ",out[i]);
			}
			printf("%d\n",out[k-1]);
		}
	}
	
	
	
	
	return 0;
}
