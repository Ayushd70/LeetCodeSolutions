struct Solution;

impl Solution {
    pub fn three_sum_closest(nums: Vec<i32>, target: i32) -> i32 {
        let mut result = 10_i32.pow(5); // the question specs state target < 10^4

        let mut nums = nums;
        nums.sort(); // we need a sorted list for the algorithm to work

        for i in 0..nums.len() - 2 {
            let mut left_ptr = i + 1;
            let mut right_ptr = nums.len() - 1;

            while left_ptr < right_ptr {
                let sum = nums[i] + nums[left_ptr] + nums[right_ptr];
                if (sum - target).abs() < (result - target).abs() {
                    result = sum;
                }
                match sum.cmp(&target) {
                    std::cmp::Ordering::Greater => right_ptr -= 1,
                    std::cmp::Ordering::Less => left_ptr += 1,
                    std::cmp::Ordering::Equal => return sum,
                }
            }
        }

        result
    }
}

fn main() {
    Solution::three_sum_closest(vec![-1, 2, 1, -4], 1);
}
