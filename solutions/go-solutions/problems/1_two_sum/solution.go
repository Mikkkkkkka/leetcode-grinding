package p1_two_sum

import (
	"sort"
)

func TwoSumBrute(nums []int, target int) []int {
	for i := range len(nums) - 1 {
		for j := i + 1; j < len(nums); j++ {
			if nums[i]+nums[j] == target {
				return []int{i, j}
			}
		}
	}
	return []int{}
}

func TwoSumSort(nums []int, target int) []int {
	type NumWithIndex struct {
		value int
		index int
	}
	numsWithIndices := make([]NumWithIndex, len(nums))
	for i, v := range nums {
		numsWithIndices[i] = NumWithIndex{v, i}
	}
	sort.Slice(numsWithIndices, func(i, j int) bool {
		return numsWithIndices[i].value < numsWithIndices[j].value
	})
	for i, v := range numsWithIndices {
		desired := target - v.value
		found := sort.Search(len(numsWithIndices), func(i int) bool {
			return numsWithIndices[i].value >= desired
		})
		if found < len(nums) && numsWithIndices[found].value == desired && numsWithIndices[found].index != numsWithIndices[i].index {
			return []int{numsWithIndices[i].index, numsWithIndices[found].index}
		}
	}
	return []int{}
}

func TwoSumHash(nums []int, target int) []int {
	processedNums := make(map[int]int)
	for i, v := range nums {
		desired := target - v
		j, ok := processedNums[desired]
		if ok {
			return []int{j, i}
		}
		processedNums[v] = i
	}
	return []int{}
}
