class Solution {
public:
    int binaryGap(int N) {
        int i;
        unsigned int b;
        bool a[40];
        for(i=0 ,b=1 ;i<32;i++,b<<=1){
            if(b & N){
                a[i]=true;
            }
            else{
                a[i]=false;
            }
        }
        int ans=-1, tmp=0;
        for(i=0;i<32;i++){
            if(a[i]==1){
                if(tmp>ans){
                    ans=tmp;
                }
                tmp=1;
            }
            else{
                if(tmp!=0){
                    tmp+=1;
                }
            }
        }
        return ans;
    }
};
