from bisect import bisect_left
from typing import Dict, List


def twoSumBrute(nums: List[int], target: int) -> List[int]:
    for i in range(0, len(nums)-1):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    raise Exception('No solution found')

def twoSumSort(nums: List[int], target: int) -> List[int]:
    nums_with_indices = []
    for i in range(len(nums)):
        nums_with_indices.append((nums[i], i))
    nums_with_indices.sort()
    for i in range(len(nums)):
        search_area = nums_with_indices[i+1::]
        desired = target - nums_with_indices[i][0]
        found = bisect_left(search_area, desired, key=lambda a: a[0])
        if found < len(search_area) and search_area[found][0] == desired:
            return [nums_with_indices[i][1], nums_with_indices[found + i + 1][1]]
    raise Exception('No solution found')

def twoSumHash(nums: List[int], target: int) -> List[int]:
    processed_nums: Dict[int, int] = {}
    for i in range(len(nums)):
        desired = target - nums[i]
        if processed_nums.get(desired) is not None:
            return [processed_nums[desired], i]
        processed_nums[nums[i]] = i
    raise Exception('No solution found')
