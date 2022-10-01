struct Solution;

impl Solution {
    pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
        use std::collections::HashMap;

        let mut res: Vec<Vec<String>> = vec![];
        let mut m: HashMap<[u8; 26], usize> = HashMap::new();
        let mut i = 0;

        for str in strs.iter() {
            let mut s: [u8; 26] = [0; 26];
            for c in str.chars() {
                let ci = c as usize - 'a' as usize;
                s[ci] += 1;
            }
            match m.get(&s) {
                Some(j) => {
                    res[*j].push(str.to_string());
                }
                None => {
                    m.insert(s, i);
                    if res.len() < i + 1 {
                        res.push(vec![]);
                    }
                    res[i].push(str.to_string());
                    i += 1;
                }
            }
        }
        res
    }
}
fn main() {
    Solution::group_anagrams(
        vec!["eat", "tea", "tan", "ate", "nat", "bat"]
            .into_iter()
            .map(ToString::to_string)
            .collect(),
    );
}
