#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the queensAttack function below.
int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    int i,j,sum,x,y;
    int w=c_q-1 , e=n-c_q , N=n-r_q , s=r_q-1;
    int ne=min(N,e) , nw=min(N,w) , sw=min(s,w) , se=min(s,e);
    for (auto obs : obstacles){
        int dif_x=obs[1]-c_q;
        int dif_y=obs[0]-r_q;
        if(dif_x==0 and dif_y>0 and dif_y-1<N){
            N=dif_y-1;
        }
        else if(dif_x==0 and dif_y<0 and -dif_y-1<s){
            s=-dif_y-1;
        }
        else if(dif_y==0 and dif_x>0 and dif_x-1<e){
            e=dif_x-1;
        }
        else if(dif_y==0 and dif_x<0 and -dif_x-1<w){
            w=-dif_x-1;
        }
        else if(dif_x==dif_y){
            if(dif_x>0 and dif_x-1<ne){
                ne=dif_x-1;
            }
            else if(dif_x<0 and -dif_x-1<sw){
                sw=-dif_x-1;
            }
        }
        else if(dif_x==-dif_y){
            if(dif_x>0 and dif_x-1<se){
                se=dif_x-1;
            }
            else if(dif_x<0 and -dif_x-1<nw){
                nw=-dif_x-1;
            }
        }
    }
    sum=e+N+w+s+ne+nw+sw+se;
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string r_qC_q_temp;
    getline(cin, r_qC_q_temp);

    vector<string> r_qC_q = split_string(r_qC_q_temp);

    int r_q = stoi(r_qC_q[0]);

    int c_q = stoi(r_qC_q[1]);

    vector<vector<int>> obstacles(k);
    for (int i = 0; i < k; i++) {
        obstacles[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> obstacles[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

    fout << result << "\n";

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
