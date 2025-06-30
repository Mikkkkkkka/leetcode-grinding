package p2_add_two_numbers

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	result := &ListNode{}
	current := result
	var carry bool
	for l1 != nil || l2 != nil || carry {
		current.Next = &ListNode{}
		current = current.Next
		if l1 != nil {
			current.Val += l1.Val
			l1 = l1.Next
		}
		if l2 != nil {
			current.Val += l2.Val
			l2 = l2.Next
		}
		if carry {
			current.Val += 1
			carry = false
		}
		if current.Val > 9 {
			current.Val %= 10
			carry = true
		}
	}
	return result.Next
}
