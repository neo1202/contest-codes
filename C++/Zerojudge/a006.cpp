#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,i,j;
	double n,m,tmp,k;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		tmp=b*b-4*a*c;
		//a=1.0*a;
		//b=1.0*b;
		k=double((-1*b))/double((2*a));
		//printf("%d %d %d %d\n",a,b,c,tmp);
		if(tmp<0){
			printf("No real root\n");
		}
		else if(tmp==0){
			printf("Two same roots x=%d\n",k);
		}
		else{
			if(a>=0){
				n=((-1*b)+(sqrt(tmp)))/(2*a);
				m=((-1*b)-(sqrt(tmp)))/(2*a);
			}
			else{
				n=((-1*b)-(sqrt(tmp)))/(2*a);
				m=((-1*b)+(sqrt(tmp)))/(2*a);
			}
			printf("Two different roots x1=%d , x2=%d\n",n,m);
		}
	}
	
	return 0;
}
