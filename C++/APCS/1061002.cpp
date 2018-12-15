#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,j,k;
	int t,n,len;
	int now,b,max,test;
	int lis[100005];
	char a[100005];
	while(cin>>k){
		for(i=0;i<=10000;i++){
			lis[i]=0;
		}
		cin>>a;
		len=strlen(a);
		now=0;
		if(a[0]<='Z'){
			b=0;
		}
		else{
			b=1;
		}
		lis[0]=1;
		for(i=1;i<len;i++){
			if(a[i]<='Z'){
				if(b!=0){
					b=0;
					now+=1;
				}
				lis[now]+=1;
			}
			else{
				if(b!=1){
					b=1;
					now+=1;
				}
				lis[now]+=1;
			}
		}
		max=0;
		test=0;
		for(i=0;i<=now;i++){
			if(lis[i]==k){
				test+=k;
			}
			else if(lis[i]>k){
				test+=k;
				if(test>max){
					max=test;
				}
				test=k;
			}
			else{
				if(test>max){
					max=test;
				}
				test=0;
			}
		}
		if(test>max){
			max=test;
		}
		/*for(i=0;i<=now;i++){
			cout<<lis[i]<<" ";
			cout<<endl;
		}
		*/
		cout<<max<<endl;
	}
	
	return 0;
}
