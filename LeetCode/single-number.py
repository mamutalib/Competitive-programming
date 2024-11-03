# class Solution:
#     def singleNumber(self, nums: List[int]) -> int:
#         unique_numbers = set()
#         for num in nums:
#             if num in unique_numbers:
#                 unique_numbers.remove(num)
#             else:
#                 unique_numbers.add(num)
#         return unique_numbers.pop()  # The remaining element is the single one.

# The most efficient solution is using XOR 
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result = 0
        for num in nums:
            result ^=num
        return result
        
        