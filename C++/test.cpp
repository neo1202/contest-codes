#include<iostream>
#include<vector>
using namespace std;
/*
constexpr int cubed(int n){
    return n*n*(n+3);
}
*/
int main(){
    /*auto a = 5;
    vector<int> v = {3,5,7,9};
    //cout<<"吳驊祐";
    for(auto n:v){
        n++;
        cout<<n<<endl;
    }
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int n;
    cin >> n;
    int arr[n];
    cout << sizeof(arr) << endl;
    //cout<<cubed(n)<<endl;
    */
    cout << [](int w, int h){return w*h;}(10,20) << endl;
}
