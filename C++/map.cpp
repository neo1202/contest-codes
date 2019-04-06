
#include<iostream>
#include<map>
#include<stdlib.h> /* srand, rand */
#include<time.h>
using namespace std;


int main(){
    // key&compare  value
    map<long long,   int> my_map;
    int t,n,i;
    while(cin>>t)
    {
      while(t--)
      {
        cin>>n;
        for(i=0;i<n;i++){

        }

        //[output]
        for (auto p : my_map){
            cout<<p.first<<" "<<p.second<<endl;
        }

      }

    }

    return 0;
}


