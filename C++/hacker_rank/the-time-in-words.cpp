#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
  char ans[100];
  string time[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","one"};
  string minute[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
  if(m<=30){
    if(m==0){
          sprintf(ans,"%s o' clock",time[h-1].c_str());
    }
    else if(m==15){
          sprintf(ans,"quarter past %s",time[h-1].c_str());
    }
    else if(m==30){
          sprintf(ans,"half past %s",time[h-1].c_str());
    }
    else if(m==1){
          sprintf(ans,"one minute past %s",time[h-1].c_str());
    }
    else if(m<=20){
          sprintf(ans,"%s minutes past %s",minute[m-1].c_str(),time[h-1].c_str());
    }
    else{
          sprintf(ans,"twenty %s minutes past %s",minute[m%10-1].c_str(),time[h-1].c_str());
    }
  }
  else{
    if(m==45){
          sprintf(ans,"quarter to %s",time[h].c_str());
    }
    else if(m==59){
          sprintf(ans,"one minute to %s",time[h].c_str());
    }
    else if(m>=40){
          sprintf(ans,"%s minutes to %s",minute[59-m].c_str(),time[h].c_str());
    }
    else{
          sprintf(ans,"twenty %s minutes to %s",minute[(60-m)%10-1].c_str(),time[h].c_str());
    }
  }
  return string(ans);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
