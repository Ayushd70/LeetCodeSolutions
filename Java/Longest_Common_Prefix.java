class Solution {

    private boolean charNotEqual(String[] strs, int i, int j) {
        if(j >= strs[i].length() || j >= strs[i+1].length()) return true;
        return strs[i].charAt(j) != strs[i+1].charAt(j);
    }
    public String longestCommonPrefix(String[] strs) {
        if(strs.length == 0) return "";
        for (int j = 0; j < strs[0].length(); j++) {
            for (int i = 0; i < strs.length - 1; i++) {
                if(charNotEqual(strs, i, j)) return strs[0].substring(0, j);
            }
        }
        return strs[0];
    }
}
