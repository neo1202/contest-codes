#include <bits/stdc++.h>
using namespace std;

enum class Direction{EAST, SOUTH, WEST, NORTH};
vector<string> split_string(string);

int neo[15][15];

void countCumulativeArea(const vector<string> &grid, int ca[15][15], Direction dir) {
  //cout<<"1"<<endl;
  int row_size=grid.size();
  int column_size=grid[0].size();
  int r_start, r_end, c_start, c_end, r_gap, c_gap, r_pre, c_pre;

  //cout<<"H"<<endl;
  if(dir==Direction::EAST){
      r_start=0;
      r_end=row_size-1;
      c_start=column_size-1;
      c_end=0;
      r_gap=1;
      c_gap=-1;
      r_pre=0, c_pre=1;
  }
  else if(dir==Direction::WEST){
      r_start=0;
      r_end=row_size-1;
      c_end=column_size-1;
      c_start=0;
      r_gap=1;
      c_gap=1;
      r_pre=0, c_pre=-1;
  }
  else if(dir==Direction::NORTH){
      r_start=0;
      r_end=row_size-1;
      c_start=0;
      c_end=column_size-1;
      r_gap=1;
      c_gap=1;
      r_pre=-1, c_pre=0;
  }
  else if(dir==Direction::SOUTH){
      r_start=row_size-1;
      r_end=0;
      c_start=0;
      c_end=column_size-1;
      r_gap=-1;
      c_gap=1;
      r_pre=1, c_pre=0;
  }

  //cout<<"E"<<endl;
  for(int i=r_start;0<=i && i<row_size;i+=r_gap){
    for(int j=c_start;0<=j && j<column_size;j+=c_gap){
      //cout<<i<<" "<<j<<" "<<grid[i][j]<<endl;
      int pre_r=i+r_pre;
      int pre_c=j+c_pre;
      if(grid[i][j]=='B'){
        //cout<<" 1 "<<endl;
        ca[i][j]=0;
      }
      else if(pre_r<row_size && pre_r>=0 && pre_c<column_size && pre_c>=0){
        //cout<<i<<" "<<j<<" "<<r_pre<<" "<<c_pre<<endl;
        ca[i][j]=1+ca[i+r_pre][j+c_pre];
      }
      else{
        //cout<<" 2 "<<endl;
        ca[i][j]=1;
      }
      //cout<<i<<" "<<j<<" "<<ca[i][j]<<" end "<<endl;
    }
    //cout<<"i = "<<i<<" end"<<endl;
  }
  //cout<<"GG"<<endl;
}
bool isCollision(int d,int big,int small,int n,int m){
    //cout<<"isCollision :"<<d<<" "<<big<<" "<<small<<" "<<n<<" "<<m<<endl;
    if(d==1){
        //cout<<"  "<<((n+m-1)>big);
        return (n+m-1)>big;
    }
    else if(d==2){
        if(n>big and m>small){
            return true;
        }
        if(m>big and n>small){
            return true;
        }
        else{
            return false;
        }
    }
}
int countMax(int y1,int x1,int y2,int x2){
  int dx=abs(x2-x1), dy=abs(y2-y1),big,small;
  if(dx>=dy){
      big=dx;
      small=dy;
  }
  else{
      big=dy;
      small=dx;
  }
  int d=-1;
  int sum=-1;
  if(neo[y1][x1]==0 or neo[y2][x2]==0) return 0;

  if(dx==0 or dy==0) d=1;
  else d=2;

  //cout<<y1<<" "<<x1<<", "<<y2<<" "<<x2<<" :"<<endl;
  int j=1;
  for(int i=neo[y1][x1];i>0;i--){
    while(j<=neo[y2][x2]){
      j+=1;
      if(isCollision(d,big,small,i,j)){
        break;
      }
    }
    j-=1;
    //cout<<"  i="<<i<<"  j="<<j<<endl;
    sum=max(sum,(i*4-3)*(j*4-3));
  }

  //cout<<"  "<<neo[y1][x1]<<" "<<neo[y2][x2]<<" "<<sum<<endl;
  return sum;
}

// Complete the twoPluses function below.
int twoPluses(const vector<string> &grid) {
  int line=grid.size();
  int column=grid[0].size();
  int i,j,k,sum;
  int cou[4][15][15];

  //cout<<"B"<<endl;

  countCumulativeArea(grid,cou[0],Direction::EAST);
  countCumulativeArea(grid,cou[1],Direction::WEST);
  countCumulativeArea(grid,cou[2],Direction::NORTH);
  countCumulativeArea(grid,cou[3],Direction::SOUTH);

  //cout<<"C"<<endl;

  for(i=0;i<line;i++){
    for(j=0;j<column;j++){
      neo[i][j]=min(cou[0][i][j],cou[1][i][j]);
      neo[i][j]=min(neo[i][j],cou[2][i][j]);
      neo[i][j]=min(neo[i][j],cou[3][i][j]);
    }
  }

  //cout<<"A"<<endl;
  int ans=0;
  for(i=0;i<line;i++){
    for(j=0;j<column;j++){
      if(neo[i][j]==0) continue;
      for(int x2=j+1;x2<column;x2++){
        ans=max(ans,countMax(i,j,i,x2));
      }
      for(int y2=i;y2<line;y2++){
        for(int x2=0;x2<column;x2++){
          ans=max(ans,countMax(i,j,y2,x2));
        }
      }
    }
  }
  //cout<<"AEND"<<endl;
  return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    int result = twoPluses(grid);

    cout << result << "\n";

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
