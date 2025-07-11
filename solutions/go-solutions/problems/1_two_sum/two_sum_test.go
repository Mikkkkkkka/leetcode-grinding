package p1_two_sum

import (
	"reflect"
	"slices"
	"testing"
)

func TestTwoSum(t *testing.T) {
	tests := []struct {
		name     string
		nums     []int
		target   int
		expected []int
	}{
		{
			name:     "testcase 1",
			nums:     []int{2, 7, 11, 15},
			target:   9,
			expected: []int{0, 1},
		},
		{
			name:     "testcase 2",
			nums:     []int{3, 2, 4},
			target:   6,
			expected: []int{1, 2},
		},
		{
			name:     "testcase 3",
			nums:     []int{3, 3},
			target:   6,
			expected: []int{0, 1},
		},
		{
			name:     "solution not found",
			nums:     []int{1, 2, 3},
			target:   6,
			expected: []int{},
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result := TwoSumBrute(tt.nums, tt.target)
			if slices.Sort(result); !reflect.DeepEqual(result, tt.expected) {
				t.Errorf("TwoSumBrute() = %v, expected %v", result, tt.expected)
			}
			result = TwoSumSort(tt.nums, tt.target)
			if slices.Sort(result); !reflect.DeepEqual(result, tt.expected) {
				t.Errorf("TwoSumSort() = %v, expected %v", result, tt.expected)
			}
			result = TwoSumHash(tt.nums, tt.target)
			if slices.Sort(result); !reflect.DeepEqual(result, tt.expected) {
				t.Errorf("TwoSumSort() = %v, expected %v", result, tt.expected)
			}
		})
	}
}
