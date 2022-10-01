class Solution {
    public boolean equalFrequency(String word) {
        int[] map = new int[26];
        for (char ch: word.toCharArray()) map[ch-'a']++;
        // brute force too many edge cases for optimised solution 
        for (int i = 0; i < map.length; ++i) {
            if (map[i] == 0) continue;
            map[i]--;
            int p = 0;
            boolean f = true;
            for (int v: map) {
                if (v == 0) continue;
                if (p == 0) p = v;
                else if (p != v) {
                    f = false;
                    break;
                }
            }
            map[i]++;
            if (f) return true;
        }
        return false;
    }
}
