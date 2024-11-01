class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n  # Normalize k
        nums[:] = nums[-k:] + nums[:-k]  # Slice and concatenate