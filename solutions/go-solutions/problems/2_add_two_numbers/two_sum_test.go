package p2_add_two_numbers

import (
	"reflect"
	"testing"
)

func TestAddTwoNumbers(t *testing.T) {
	tests := []struct {
		name     string
		l1       []int
		l2       []int
		expected []int
	}{
		{
			name:     "testcase 1",
			l1:       []int{2, 4, 3},
			l2:       []int{5, 6, 4},
			expected: []int{7, 0, 8},
		},
		{
			name:     "testcase 2",
			l1:       []int{0},
			l2:       []int{0},
			expected: []int{0},
		},
		{
			name:     "testcase 3",
			l1:       []int{9, 9, 9, 9, 9, 9, 9},
			l2:       []int{9, 9, 9, 9},
			expected: []int{8, 9, 9, 9, 0, 0, 0, 1},
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			l1 := sliceToLinkedList(tt.l1)
			l2 := sliceToLinkedList(tt.l2)
			result := addTwoNumbers(l1, l2)
			resultSlice := linkedListToSlice(result)
			if !reflect.DeepEqual(resultSlice, tt.expected) {
				t.Errorf("AddTwoNumbers() = %v, expected %v", resultSlice, tt.expected)
			}
		})
	}
}

func sliceToLinkedList(slice []int) *ListNode {
	dummy := &ListNode{}
	current := dummy
	for _, v := range slice {
		current.Next = &ListNode{Val: v}
		current = current.Next
	}
	return dummy.Next
}

func linkedListToSlice(head *ListNode) []int {
	var result []int
	for head != nil {
		result = append(result, head.Val)
		head = head.Next
	}
	return result
}
