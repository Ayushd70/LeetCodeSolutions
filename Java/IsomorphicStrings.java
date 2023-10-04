class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character, Character> cMap = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            char sc = s.charAt(i), tc = t.charAt(i);
            boolean contains = cMap.containsKey(sc);
            if ((contains && cMap.get(sc) != tc)
                    || (!contains && cMap.containsValue(tc))) return false;
            if (!contains) cMap.put(sc, tc);
        }
        return true;
    }
}
