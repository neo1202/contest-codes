
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int low,mid,up,now;
	int i,j,tmp,need,ans;
	int n,k;
	int a[50005];
	while(scanf("%d%d", &n, &k)!=EOF)
	{
		low=0;
		up=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>up){
				up=a[i];
			}
		}
		sort(a,a+n);
		/*
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[i]){
					tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		*/
		ans=10000000000;
		while(low<=up){
			mid=(low+up)/2;
			need=0;
			now=0;
			for(i=0;i<n;i++){
				if(now<a[i]){
					now=a[i]+mid;
					need+=1;
				}
			}
			if(need>k){
				low=mid+1;
			}
			else if(need<=k){
				up=mid-1;
				if(ans>mid){
					ans=mid;
				}
			}
		}
		printf("%d\n" , ans);
	}

	
	return 0;
 } 
