class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = dict()
        for i in range(len(nums)):
            r = target - nums[i]
            if r not in d:
                d[nums[i]] = i
            elif r in d:
                return [i,d[r]]
        return [-1,-1]
        