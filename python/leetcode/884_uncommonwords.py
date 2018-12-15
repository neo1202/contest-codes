class Solution:
    def uncommonFromSentences(self, A, B):
        count={}
        for s in A.split()+B.split() :
            count[s]=count.get(s,0)+1
        return [i for i in count if count[i]==1]
