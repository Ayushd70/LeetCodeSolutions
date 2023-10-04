import java.util.Arrays;

class Solution {
    private static String sortString(String s) {
        char[] c = s.toCharArray();
        Arrays.sort(c);
        return new String(c);
    }

    public boolean isAnagram(String s, String t) {
        return sortString(s).equals(sortString(t));
    }
}
