#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
  int len=s.size();
  double a=sqrt(len);
  //int row=floor(a);
  int column=ceil(a);
  string out="";
  for(int i=0;i<column;i+=1){
    for(int j=i;j<len;j+=column){
      out+=s[j];
    }
    out+=" ";
  }
  return out;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
