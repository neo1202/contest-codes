class Solution:
    def wordPattern(self, pattern, str):
        m={}
        m_reverse={}
        pat=list(pattern)
        if len(pat) != len(str.split()) :
            return False
        for i in str.split() :
            if pat[0] in m :
                if i!=m[pat[0]] :
                    return False
            elif i in m_reverse :
                if pat[0]!=m_reverse[i] :
                    return False
            else :
                m[pat[0]]=i
                m_reverse[i]=pat[0]
            pat.pop(0)
        return True


sol = Solution()
print(sol.wordPattern("abba","dog cat cat dog"))
print(sol.wordPattern("abba","dog dog dog dog"))
print(sol.wordPattern("abb","dog dog dog dog"))
