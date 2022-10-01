impl Solution {
    pub fn find_the_difference(s: String, t: String) -> char {
        let mut s = s.into_bytes();
        let mut t = t.into_bytes();
        s.sort();
        t.sort();
        for (a, b) in s.iter().zip(t.iter()) {
            if a != b {
                return *b as char;
            }
        }
        t[s.len()] as char
    }
}
