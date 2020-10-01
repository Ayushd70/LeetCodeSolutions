class Solution {
    public int lengthOfLongestSubstring(String s) {
        int res = -1;
        int count = 0;
        int[] present = new int[256];
        for (char i = 0; i < 256; i++) present[i] = -1;
        char[] str = s.toCharArray();
        int i = 0;
        while(i < str.length) {
            char ch = str[i];
            if(present[ch] != -1) {
                i = present[ch];
                for (char j = 0; j < 256; j++) present[j] = -1;
                if(res < count) res = count;
                count = 0;
            }
            else {
                present[ch] = i;
                count++;
            }
            i++;
        }
        return res < count ? count : res;
    }
}
