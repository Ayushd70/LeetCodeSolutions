class Solution {
    public List < List < Integer >> generate(int numRows) {
        List < List < Integer >> ans = new ArrayList < > ();
        ans.add(List.of(1));
        if (numRows == 1) {
            return ans;
        }
        for (int row = 2; row <= numRows; row++) {
            List < Integer > newRow = new ArrayList < > ();
            List < Integer > prevRow = ans.get(row - 2);
            for (int i = 0; i < row; i++) {
                if (i == 0 || i == row - 1) {
                    newRow.add(1);
                } else {
                    newRow.add(prevRow.get(i - 1) + prevRow.get(i));
                }
            }
            ans.add(newRow);
        }
        return ans;
    }
}
