class Solution:
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        oralline=""
        ans=[]
        def permutation(le,ri,line):
            if le<n:
                permutation(le+1,ri,line+'(')
            if le>ri :
                permutation(le,ri+1,line+')')
            if le==ri==n:
                ans.append(line)
        permutation(0,0,oralline)
        return ans
sol=Solution()
print(sol.generateParenthesis(3))
print(sol.generateParenthesis(4))
