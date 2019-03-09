#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
  int now=0;
  int ans=0;
  for(int i=0;i<n;i++){
    if(s[i]=='D'){
      now-=1;
    }
    if(s[i]=='U'){
      now+=1;
      if(now==0){
        ans+=1;
      }
    }
  }
  return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

