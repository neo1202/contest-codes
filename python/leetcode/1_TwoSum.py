class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in nums :
            for j in nums[nums.index(i)+1:]:
                if i+j==target:
                    return [nums.index(i),nums.index(j,nums.index(i)+1)]

sol = Solution()
print(sol.twoSum([2, 7, 11, 15],9))
print(sol.twoSum([3,3],6))
