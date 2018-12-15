#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int x;
	int i,j,k;
	int nn,mm;
	char a[1005];
	while(cin>>a)
	{
		nn=0;
		mm=0;
		k=strlen(a);
		for(i=0;i<k;i++)
		{
			if(i%2==0){
				nn=nn+a[i]-'0';
			}
			else{
				mm=mm+a[i]-'0';
			}
		}
		if(nn>=mm){
			cout<<nn-mm<<endl;
		}
		else{
			cout<<mm-nn<<endl;
		}
	}
	
	
	return 0;
} 
