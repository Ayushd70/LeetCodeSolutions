impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut min = i32::MAX;
    let mut max = 0;
    for i in prices{
        if i < min {
            min = i;
        } else if i - min > max {
            max = i - min;
        }
    }
    max
    }
}
