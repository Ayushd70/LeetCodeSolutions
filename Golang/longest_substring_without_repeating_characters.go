// Time: O(n)

func lengthOfLongestSubstring(s string) int {
	m := make(map[byte]int)
	res := 0
	left := 0
	right := 0

	for right < len(s) {
		if index, ok := m[s[right]]; ok {
			if left > index {
				left = left
			} else {
				left = index
			}
		}

		if res > right-left+1 {
			res = res
		} else {
			res = right - left + 1
		}

		m[s[right]] = right + 1
		right++
	}
	return res
}