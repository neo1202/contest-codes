#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the bomberMan function below.
vector<string> bomberMan(int n, vector<string> grid) {
  vector<string> mirror,mirror2,zero;
  int i,j;
  for(i=0;i<grid.size();i++){
    zero.push_back("");
    mirror.push_back("");
    for(j=0;j<grid[0].size();j++){
        if((i+1<grid.size() and grid[i+1][j]=='O')
           || (i-1>=0 and grid[i-1][j]=='O')
           || (j+1<grid[0].size() and grid[i][j+1]=='O')
           || (j-1>=0 and grid[i][j-1]=='O')
           || (grid[i][j]=='O')){
                mirror[i]+='.';
           }
        else{
                mirror[i]+='O';
        }
        zero[i]+='O';
    }

  }
  for(i=0;i<grid.size();i++){
    mirror2.push_back("");
    for(j=0;j<grid[0].size();j++){
        if((i+1<grid.size() and mirror[i+1][j]=='O')
           || (i-1>=0 and mirror[i-1][j]=='O')
           || (j+1<grid[0].size() and mirror[i][j+1]=='O')
           || (j-1>=0 and mirror[i][j-1]=='O')
           || (mirror[i][j]=='O')){
                mirror2[i]+='.';
           }
        else{
                mirror2[i]+='O';
        }
    }

  }
    //vector
  if(n%2==0){
    return zero;
  }
  else if(n==1){
    return grid;
  }
  else if((n-1)%4==0){
    return mirror2;
  }
  else{
    return mirror;
  }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string rcn_temp;
    getline(cin, rcn_temp);

    vector<string> rcn = split_string(rcn_temp);

    int r = stoi(rcn[0]);

    int c = stoi(rcn[1]);

    int n = stoi(rcn[2]);

    vector<string> grid(r);

    for (int i = 0; i < r; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = bomberMan(n, grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
