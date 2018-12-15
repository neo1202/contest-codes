#include<cstdio>
#include<math.h>
#include<string>
using namespace std;

int n;
int i,j,k,end;
string ans;

void use(int a){
	int x=0;
	while(n%a==0)
	{
		n=n/a;
		x+=1;
	}
	k+=1;
	if(k==1){
		if(x>=2){
			ans=ans+str(a)+"^"+str(x);
		}
		else{
			ans=ans+"{}".format(a);
		}
	}
	else{
		if(x>=2){
			ans=ans+" * {}^{}".format(a,x);
		}
		else{
			ans=ans+" * {}".format(a);
		}
		
	}
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		k=0;
		ans="";
		end=sqrt(n)+1;
		for(i=2;i<=end;i++){
			if(n%i==0){
				use(i);
			}
		}
		printf("%d\n",ans)
	}
	
	
	return 0;
 } 
