// Time:  O(n)

func reverse(x int) int {
	var reversed int
	for x != 0 {
		last_digit := x % 10
		reversed = reversed*10 + last_digit
		x = x / 10
	}
	if reversed < -1<<31 || reversed > 1<<31 {
		return 0
	}
	return reversed
}