use std::collections::HashMap;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let nums_len = nums.len();
    let mut map = HashMap::new();

    for i in 0..nums_len {
        let t = target - nums[i];

        if let Some(x) = map.get(&t) {
            return vec![*x, i as i32];
        } else {
            map.insert(nums[i], i as i32);
        }
    }
    vec![]
}
