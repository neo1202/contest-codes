#include<iostream> 
using namespace std;

int group[10]; // 0~1
int people[2]; //0~3¤H¼Æ 
int force[2];
int a[10];
bool ans;

void dfs(int n)// 1~6
{
	if(n>6)
	{
		int i;
		bool this_ans;
		this_ans=true;
		for(i=1;i<=6;i++)
		{
			//cout<<group[i];
			if((2*a[i])>=force[group[i]])
				this_ans=false;
		}
		//cout<<endl;
		if(this_ans==true)
			ans=true;
	}
	else
	{
		if(people[0]<3)
		{
			group[n]=0;
			people[0]+=1;
			force[0]+=a[n];
			dfs(n+1);
			people[0]--;
			force[0]-=a[n];
		}
		if(people[1]<3)
		{
			group[n]=1;
			people[1]+=1;
			force[1]+=a[n];
			dfs(n+1);
			people[1]--;
			force[1]-=a[n];
		}
	}
}
int main()
{
	int t,x,y,i,j,k,tmp;
	while(cin>>t)
	{
		for(j=1;j<=t;j++)
		{
			for(i=0;i<10;i++)
				a[i]=0;
			for(i=1;i<=6;i++)
				cin>>a[i];
			people[0]=0;
			people[1]=0;
			force[0]=0;
			force[1]=0;
			ans=false;
			dfs(1);
			if(ans==true)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}
