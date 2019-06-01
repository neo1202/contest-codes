class Solution {
public:
    vector<int> countBits(int num) {
      int i,j,k;
      vector<int> ans(num+1);
      for(i=0;i<=num;i++){
        for(j=i, k=0;j>0;j/=2){
            if(j%2==1){
              k+=1;
            }
        }
        ans[i]=k;

      }
      return ans;
    }
};
