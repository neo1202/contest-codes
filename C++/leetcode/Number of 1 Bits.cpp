class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i, sum=0;
        while(n>0){
            if(n%2==1){
                sum+=1;
            }
            n>>=1;
        }
        return sum;
    }
};
