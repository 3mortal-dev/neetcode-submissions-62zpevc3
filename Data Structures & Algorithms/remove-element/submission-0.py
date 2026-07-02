class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        freq = nums.count(val)
        for i in range(freq):
            nums.remove(val)
        return len(nums)
        