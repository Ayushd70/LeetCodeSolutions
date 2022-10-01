public boolean canJump(int[] nums) {
    int indexToJump = nums.length - 1;
    for (int i = nums.length - 1; i >= 0; i--) {
        if (i + nums[i] >= indexToJump) {
            indexToJump = i;
        }
    }
    return indexToJump == 0;
}
