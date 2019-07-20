#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the larrysArray function below.
string larrysArray(vector<int> A) {
  int len=A.size();
  int i,j,k;
  int one[1001];
  for(i=0;i<1001;i++){
      one[i]=0;
  }
  for(i=0;i<len;i++){
    if(A[i]>len or A[i]<1 or one[A[i]]!=0){
      return "NO";
    }
    else{
      one[A[i]]=1;
    }
  }
  for(i=0;i<(len-3);i++){
    if(A[i]==(i+1)) continue;
    for(j=i+1;j<len;j++){
      if(A[j]==i+1){
        break;
      }
    }
    while(j>=(i+2)){
      int x=A[j-2];
      int y=A[j-1];
      int z=A[j]  ;
      A[j]  =y;
      A[j-1]=x;
      A[j-2]=z;
      j-=2;
    }
    if(j==i+1){
      int x=A[j-1];
      int y=A[j]  ;
      int z=A[j+1];
      A[j-1]=y;
      A[j]  =z;
      A[j+1]=x;
    }
  }
  for(i=0;i<len;i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
  int x=A[len-3];
  int y=A[len-2];
  int z=A[len-1];
  if((x<y and y<z) or (y<z and z<x) or (z<x and x<y)){
      return "YES";
  }
  else{
      return "NO";
  }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string A_temp_temp;
        getline(cin, A_temp_temp);

        vector<string> A_temp = split_string(A_temp_temp);

        vector<int> A(n);

        for (int i = 0; i < n; i++) {
            int A_item = stoi(A_temp[i]);

            A[i] = A_item;
        }

        string result = larrysArray(A);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
