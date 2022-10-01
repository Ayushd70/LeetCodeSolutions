struct Solution;

impl Solution {
    pub fn num_decodings(s: impl std::string::ToString) -> i32 {
        let s = s.to_string();
        let mut dp = vec![1, if &s[0..1] == "0" { 0 } else { 1 }];
        dp.extend(vec![0; s.len() - 1]);
        for i in 2..dp.len() {
            let jumps = (1..=2)
                .map(|j| s[i - j..i].parse::<usize>().unwrap())
                .collect::<Vec<usize>>();
            if 0 < jumps[0] && jumps[0] <= 9 {
                dp[i] += dp[i - 1];
            }
            if 10 <= jumps[1] && jumps[1] <= 26 {
                dp[i] += dp[i - 2];
            }
        }
        dp[s.len()]
    }
}

fn main() {
    Solution::num_decodings("12");
}
