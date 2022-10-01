impl Solution {
    pub fn fizz_buzz(n: i32) -> Vec<String> {
        let mut answer = Vec::new();
        for i in 1..=n {
            answer.push(
                match (i % 3 == 0, i % 5 == 0) {
                    (true, true) => "FizzBuzz".to_string(),
                    (true, false) => "Fizz".to_string(),
                    (false, true) => "Buzz".to_string(),
                    (false, false) => i.to_string(),
                }
            )
        }
        answer
    }
}
