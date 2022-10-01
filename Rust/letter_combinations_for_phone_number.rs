struct Solution;
impl Solution {
    fn get_char(c: char) -> String {
        let mut res = "";
        if c == '2' {
            res = "abc";
        } else if c == '3' {
            res = "def";
        } else if c == '4' {
            res = "ghi";
        } else if c == '5' {
            res = "jkl";
        } else if c == '6' {
            res = "mno";
        } else if c == '7' {
            res = "pqrs";
        } else if c == '8' {
            res = "tuv";
        } else if c == '9' {
            res = "wxyz";
        }
        return res.into();
    }
    pub fn letter_combinations(digits: String) -> Vec<String> {
        if digits.is_empty() {
            return vec![];
        }
        digits.chars().fold(vec![String::from("")], |acc, digit| {
            acc.iter()
                .flat_map(|x| {
                    Self::get_char(digit)
                        .chars()
                        .map(|y| format!("{}{}", x, y))
                        .collect::<Vec<String>>()
                })
                .collect()
        })
    }
}

fn main() {
    Solution::letter_combinations("23".to_string());
}
