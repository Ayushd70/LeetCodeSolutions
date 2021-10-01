func numDistinct(s string, t string) int {
	mem := make([][]int, len(t)+1)
	for i := range mem {
		mem[i] = make([]int, len(s)+1)
	}

	for i := 0; i <= len(s); i++ {
		mem[0][i] = 1
	}

	for i := 0; i < len(t); i++ {
		for j := 0; j < len(s); j++ {
			if t[i] == s[j] {
				mem[i+1][j+1] = mem[i][j] + mem[i+1][j]
			} else {
				mem[i+1][j+1] = mem[i+1][j]
			}
		}
	}
	return mem[len(t)][len(s)]
}
