#include <bits/stdc++.h>
#include <map>
using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<int>> container) {
  map<long long,   int> my_map;
  int n =container.size();
  int sum[n],i,j;
  for(i=0;i<n;i++){
      sum[i]=0;
    for(j=0;j<n;j++){
      sum[i]+=container[i][j];
    }
    if(my_map.count(sum[i])){
      my_map[sum[i]]+=1;
    }
    else{
      my_map[sum[i]]=1;
    }
  }
  int total;
  for(i=0;i<n;i++){
    total=0;
    for(j=0;j<n;j++){
      total+=container[j][i];
    }
    if(!my_map.count(total) or my_map[total]<=0){
      return "Impossible";
    }
  }
  return "Possible";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> container(n);
        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
