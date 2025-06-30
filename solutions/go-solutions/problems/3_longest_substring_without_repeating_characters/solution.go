package p3_longest_substring_without_repeating_characters

func lengthOfLongestSubstringDumb(s string) int {
	var result int
	for i := 0; i < len(s); i++ {
		occurredChars := make(map[byte]int)
		j := i
		for ; j < len(s); j++ {
			if _, ok := occurredChars[s[j]]; ok {
				break
			}
			occurredChars[s[j]] = j
		}
		if len := j - i; result < len {
			result = len
		}
		if j == len(s) {
			break
		}
	}
	return result
}

func lengthOfLongestSubstringWindow(s string) int {
	var result int
	occurredChars := make(map[byte]int)
	for right, left := 0, 0; right < len(s); right++ {
		if i, ok := occurredChars[s[right]]; ok && i >= left {
			left = i + 1
		}
		occurredChars[s[right]] = right
		if result < right-left+1 {
			result = right - left + 1
		}
	}
	return result
}
