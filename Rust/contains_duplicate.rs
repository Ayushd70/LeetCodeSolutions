use std::collections::HashMap;

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut hashmap = HashMap::new();
        nums.into_iter().any(|i| hashmap.insert(i, i).is_some())
    }
}
