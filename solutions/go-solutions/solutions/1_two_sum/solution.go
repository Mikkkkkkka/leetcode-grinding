package p1_two_sum

func TwoSum(nums []int, target int) []int {
	for i := range len(nums) - 1 {
		for j := i + 1; j < len(nums); j++ {
			if nums[i]+nums[j] == target {
				return []int{i, j}
			}
		}
	}
	return []int{}
}
