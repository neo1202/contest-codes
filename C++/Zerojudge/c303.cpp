#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  char tmp, ans[100001];
  while(cin>>n>>ans){
    for(i=0;i<n;i++){
      ans[i]^=32;
    }
    cout<<ans<<endl;
  }




  return 0;
}
