#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,n;
	int i,j;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		if(b<a){
			n=b;
			b=a;
			a=n;
		}
		if(c<a){
			n=c;
			c=a;
			a=n;
		}
		if(c<b){
			n=c;
			c=b;
			b=n;
		}
		printf("%d %d %d\n",a,b,c);
		if(a+b<c or a+b==c){
			printf("No");
		}
		else if(a*a+b*b<c*c){
			printf("Obtuse");
		}
		else if(a*a+b*b==c*c){
			printf("Right");
		}
		else{
			printf("Acute");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
