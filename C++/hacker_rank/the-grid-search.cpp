#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
int add[1000][1000];
// Complete the gridSearch function below.
string gridSearch(vector<string> G, vector<string> P) {
  int i,j,k,x,y;
  int left, up, lu;
  int sum;
  bool ans;
  int total=0;
  int g_row= G.size(), p_row= P.size();
  int g_column= G[0].size() , p_column= P[0].size();
  for(i=0;i<g_row;i++){
    for(j=0;j<g_column;j++){
      if(i==0 and j==0){
        left=up=lu=0;
      }
      else if(i==0){
        left=add[i][j-1];
        up=lu=0;
      }
      else if(j==0){
        up=add[i-1][j];
        left=lu=0;
      }
      else{
        up=add[i-1][j];
        left=add[i][j-1];
        lu=add[i-1][j-1];
      }
      add[i][j]=up+left-lu+G[i][j]-'0';
    }
  }
  /*for(i=0;i<g_row;i++){
    for(j=0;j<g_column;j++){
      cout<<add[i][j]<<" ";
    }
    cout<<endl;
  }
  */
  for(i=0;i<p_row;i++){
    for(j=0;j<p_column;j++){
      total=total+P[i][j]-'0';
    }
  }
  for(i=0;i<=g_row-p_row;i++){
    for(j=0;j<=g_column-p_column;j++){
      sum=add[i+p_row-1][j+p_column-1];
      if(i!=0){
        sum-=add[i-1][j+p_column-1];
      }
      if(j!=0){
        sum-=add[i+p_row-1][j-1];
      }
      if(i!=0 and j!=0){
        sum+=add[i-1][j-1];
      }
      //cout<<i<<" "<<j<<" "<<sum<<endl;
      if(sum==total){
        ans=1;
        //cout<<i<<" "<<j<<endl;
        for(x=0;x<p_row;x++){
          for(y=0;y<p_column;y++){
            if(P[x][y]!=G[x+i][y+j]){
              ans=0;
            }
          }
        }
      }
     if(ans==1){
        return "YES";
     }
    }
  }
  return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string RC_temp;
        getline(cin, RC_temp);

        vector<string> RC = split_string(RC_temp);

        int R = stoi(RC[0]);

        int C = stoi(RC[1]);

        vector<string> G(R);

        for (int i = 0; i < R; i++) {
            string G_item;
            getline(cin, G_item);

            G[i] = G_item;
        }

        string rc_temp;
        getline(cin, rc_temp);

        vector<string> rc = split_string(rc_temp);

        int r = stoi(rc[0]);

        int c = stoi(rc[1]);

        vector<string> P(r);

        for (int i = 0; i < r; i++) {
            string P_item;
            getline(cin, P_item);

            P[i] = P_item;
        }

        string result = gridSearch(G, P);

        fout << result << "\n";
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
