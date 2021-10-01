func firstMissingPositive(nums []int) int {
    //we can map negative, 0 and number that is larger than n to 1
    //first check if one exist
    n := len(nums)
    oneExist := false
    for i := 0; i < n; i++ {
        if nums[i] == 1 {
            oneExist = true
            break
        }
    }
    if !oneExist {
        return 1
    }
    for i := 0; i < n; i++ {
        if nums[i] <= 0 || nums[i] > n {
            nums[i] = 1
        }
    }
    for i := 0; i < n; i++ {
        nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1])
    }
    for i := 0; i < n; i++ {
        if nums[i] > 0 {
            return i+1
        }
    }
    return n+1
}

func abs(x int) int {
    if x < 0 {
        return -x
    } else {
        return x
    }
}
