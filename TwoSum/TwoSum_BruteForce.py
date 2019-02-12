#Umar Tung

class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for k in range(len(nums)):
            for l in range(k+1,len(nums)):
                if nums[k] +nums[l] == target:
                    return k,l
