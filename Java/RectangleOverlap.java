class Solution {
    public boolean isRectangleOverlap(int[] rec1, int[] rec2) {
        return (
            overlap(rec1[0], rec1[2], rec2[0], rec2[2]) &&
            overlap(rec1[1], rec1[3], rec2[1], rec2[3])
        );
    }
    
    public boolean overlap(int ax1, int ax2, int bx1, int bx2) {
        if (ax2 <= bx1 || bx2 <= ax1) return false;
            return true;
    }
}
