class Solution {
    public int myAtoi(String str) {
        boolean isNeg = false;
        int i = 0;
        while(i < str.length() && str.charAt(i) == ' ') i++;
        if(i >= str.length()) return 0;
        if(str.charAt(i) == '-') {isNeg = true; i++;}
        else if(str.charAt(i) == '+') i++;
        while(i < str.length() && str.charAt(i) == '0') i++;
        int j = i;
        while (j < str.length() && Character.isDigit(str.charAt(j))) j++;
        if (j == i) return 0;
        int maxlen = (int)(Math.log10(Integer.MAX_VALUE)) + 1;
        int value = 0;
        if(j-i > maxlen){
            if(isNeg) return Integer.MIN_VALUE;
            return Integer.MAX_VALUE;
        }
        else if(j - i < maxlen){
            value = Integer.parseInt(str.substring(i,j));
            if(isNeg) value*=-1;
        }
        else {
            long val = Long.parseLong(str.substring(i,j));
            if(isNeg) val*=-1;
            if(val < Integer.MIN_VALUE) return Integer.MIN_VALUE;
            if(val > Integer.MAX_VALUE) return Integer.MAX_VALUE;
            value = (int) val;
        }
        return value;
    }
}
