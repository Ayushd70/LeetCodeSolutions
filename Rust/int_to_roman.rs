impl Solution {
    pub fn int_to_roman(mut num: i32) -> String {
        let symbol: Vec<&str> = vec![
            "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I",
        ];
        let value: Vec<i32> = vec![1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
        let mut s = String::from("");
        for (i, v) in value.iter().enumerate() {
            while num >= *v {
                s.push_str(symbol[i]);
                num -= v;
            }
        }
        return s;
    }
}

