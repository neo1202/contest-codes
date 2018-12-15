class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        a={}
        count=0
        for i in nums :
            if i in a:
                return [a[i],count]
            a[target-i]=count
            count+=1

sol = Solution()
print(sol.twoSum([2, 7, 11, 15],9))
print(sol.twoSum([3,3],6))
