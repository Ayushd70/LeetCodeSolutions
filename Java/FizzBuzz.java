class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> list = new ArrayList<>();
        int i3 = 0, i5 = 0;
        String f = "Fizz", b = "Buzz", fb = "FizzBuzz";
        for (int i = 1; i <= n; i++) {
            i3 += 1; i5 += 1;
            if (i3 == 3 && i5 == 5) {
                list.add(fb);
                i3 = 0; i5 = 0;
            } else if (i3 == 3) {
                list.add(f);
                i3 = 0;
            } else if (i5 == 5) {
                list.add(b);
                i5 = 0;
            } else {
                list.add(String.valueOf(i));
            }
        }
        return list;
    }
}
