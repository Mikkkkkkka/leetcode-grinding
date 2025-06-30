package p3_longest_substring_without_repeating_characters

import (
	"reflect"
	"testing"
)

func TestLongestSubstringWithoutRepeatingCharacters(t *testing.T) {
	tests := []struct {
		name     string
		s        string
		expected int
	}{
		{
			name:     "testcase 1",
			s:        "abcabcbb",
			expected: 3,
		},
		{
			name:     "testcase 2",
			s:        "bbbbb",
			expected: 1,
		},
		{
			name:     "testcase 3",
			s:        "pwwkew",
			expected: 3,
		},
		{
			name:     "dumb test 340",
			s:        " ",
			expected: 1,
		},
		{
			name:     "dumb test 407",
			s:        "dvdf",
			expected: 3,
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if result := lengthOfLongestSubstringDumb(tt.s); !reflect.DeepEqual(result, tt.expected) {
				t.Errorf("LengthOfLongestSubstring() = %v, expected %v", result, tt.expected)
			}
			if result := lengthOfLongestSubstringWindow(tt.s); !reflect.DeepEqual(result, tt.expected) {
				t.Errorf("LengthOfLongestSubstring() = %v, expected %v", result, tt.expected)
			}
		})
	}
}
