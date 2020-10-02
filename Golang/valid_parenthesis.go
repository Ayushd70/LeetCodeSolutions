// Time: O(n)

func isValid(s string) bool {
	stack := []rune{}
	Maps := map[rune]rune{
		')': '(',
		'}': '{',
		']': '[',
	}

	if s != "" {
		for _, b := range s {
			if len(stack) == 0 {
				stack = append(stack, b)
				continue
			}
			if Maps[b] == stack[len(stack)-1] {
				stack = stack[:len(stack)-1]
			} else {
				stack = append(stack, b)
			}
		}
	} else {
		return false
	}
	if len(stack) == 0 {
		return true
	}
	return false
}
