// https://leetcode.com/problems/palindrome-number/

pub fn is_palindrome(x: i32) -> bool {
    x.to_string() == x.to_string().chars().rev().collect::<String>()
}
