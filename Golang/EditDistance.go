func minDistance(word1 string, word2 string) int {
    len1, len2 := len(word1), len(word2)
    
    costs := make([][]int, len1 + 1)
    for idx := range costs{
        costs[idx] = make([]int, len2 + 1)
    }
    
    for idx := 0; idx <= len1; idx++ {
        costs[idx][0] = idx
    }
    
    for idx := 0; idx <= len2; idx++{
        costs[0][idx] = idx
    }
    
    for idx1 := 0; idx1 < len1; idx1++{
        for idx2 := 0; idx2 < len2; idx2++ {
            if word1[idx1] == word2[idx2] {
                costs[idx1 + 1][idx2 + 1] = costs[idx1][idx2]
            }else{
                replacement := costs[idx1][idx2]
                insersion := costs[idx1 + 1][idx2]
                deletion := costs[idx1][idx2 + 1]
                
                costs[idx1 + 1][idx2 + 1] = 1 + minOf(replacement, insersion, deletion)
            }
        }
    }
    
    return costs[len1][len2]
}

func minOf(vars ...int) int{
    min := vars[0]
    
    for _, val := range vars{
        if val < min{
            min = val
        }
    }
    
    return min
}
