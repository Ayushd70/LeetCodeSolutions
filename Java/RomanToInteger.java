class Solution {

    private final Map<Character, Integer> map = Map.of(
            'I', 1,
            'V', 5,
            'X', 10,
            'L', 50,
            'C', 100,
            'D', 500,
            'M', 1000
    );

    public int romanToInt(String s) {
        int result = map.get(s.charAt(s.length() - 1));
        int last = result;
        for (int i = s.length() - 2; i >= 0; i--) {
            int curInt = map.get(s.charAt(i));
            if (curInt < last)
                result -= curInt;
            else
                result += curInt;
            last = curInt;
        }

        return result;
    }
}
