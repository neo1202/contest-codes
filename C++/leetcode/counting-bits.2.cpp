class Solution {
public:
    vector<int> countBits(int num) {
      vector<int> ans(num+1);
      int i;
      ans[0]=0;
      if(num==0){
        return ans;
      }
      ans[1]=1;
      for(i=2;i<=num;i++){
        ans[i]=ans[i & (i-1)]+1;
      }
      return ans;
    }
};
