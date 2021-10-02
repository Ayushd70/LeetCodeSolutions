// https://leetcode.com/problems/reverse-integer/

impl Solution {
    pub fn reverse(x: i32) -> i32 {
        let mut reversed: i32 = 0;
        let mut start_value = x;
        let mut _overflow: Option<i32> = None;

        while start_value != 0 {
            _overflow = reversed.checked_mul(10);
            match _overflow {
                Some(x) => {
                    reversed = x;
                    _overflow = reversed.checked_add(start_value % 10);
                    match _overflow {
                        Some(x) => reversed = x,
                        None => return 0,
                    }
                }
                None => return 0,
            }
            start_value = start_value / 10;
        }
        reversed
    }
}
