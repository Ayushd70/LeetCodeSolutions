// Time: O(n)

func isPalindrome(x int) bool {

	if x < 0 {
		return false
	}

	var reversed int
	temp := x
	for x != 0 {
		last_digit := x % 10
		reversed = reversed*10 + last_digit
		x = x / 10
	}

	if reversed == temp {
		return true
	}

	return false
}