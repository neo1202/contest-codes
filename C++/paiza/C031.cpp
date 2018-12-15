#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,h,m;
	int tl[111],anst;
	char s;
	string a[111],ans;
	while(cin>>n)
	{
		for(i=1;i<=n;i++)
		{
			cin>>a[i]>>tl[i];
		}
		cin>>ans>>h>>s>>m;
		for(i=1;i<=n;i++)
		{
			if(a[i]==ans)
			{
				anst=tl[i];
			}
		}
		for(i=1;i<=n;i++)
		{
			printf("%02d:%02d\n", (h-anst+tl[i]+24)%24,m);
		}
		
	}

	return 0;
}
