class Solution {
public
    int singleNumber(vectorint& nums) {
        int a=0, i;
        for(i=0;inums.size();i++){
            a=a^nums[i];
        }
        return a;
    }
};