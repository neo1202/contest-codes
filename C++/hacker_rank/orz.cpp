#include <bits/stdc++.h>

using namespace std;

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {
  int len=w.size();
  int tmp;
  string ans="";
  for(int i=len-2;i>=0;i--){
      if(w[i]<w[i+1]){
        for(int j=len-1;j>i;j--){
          if(w[j]>w[i]){
            tmp=w[j];
            w[j]=w[i];
            w[i]=tmp;
            break;
          }
        }
        for(int k=0;k<=i;k++){
          ans+=w[k];
        }
        for(int k=len-1;k>i;k--){
          ans+=w[k];
        }
        break;
      }
  }
  if(ans==""){
    ans="no answer";
  }
  return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
