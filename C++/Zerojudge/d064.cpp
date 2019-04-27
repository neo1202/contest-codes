#include<iostream>
using namespace std;
int main(){
  int i;
  while(cin>>i)
  {
    if((i & 1)== 0){
      cout<<"Even"<<endl;
    }
    else{
      cout<<"Odd"<<endl;
    }
  }
}
