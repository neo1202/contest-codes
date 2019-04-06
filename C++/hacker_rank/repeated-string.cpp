#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long long repeatedString(string s, long long n) {
  long long len=s.length();
  long long counting=0;
  long long i;
  long long repeat=n/len;
  for(i=0;i<len;i++)
  {
    if(s[i]=='a'){
      counting+=1;
    }
  }
  n=n-len*repeat;
  counting*=repeat;
  for(i=0;i<n;i++)
  {
    if(s[i]=='a'){
      counting+=1;
    }
  }

  return counting;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
