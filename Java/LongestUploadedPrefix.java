class LUPrefix {
    // probably an overkill 
    UF uf;
    boolean[] v;

    public LUPrefix(int n) {
        uf = new UF(n+1);
        v = new boolean[n+2];
    }
    
    public void upload(int video) {
        v[video] = true;
        if (v[video-1]) uf.union(video-1, video);
        if (v[video+1]) uf.union(video, video+1);
    }
    
    public int longest() {
        return v[1] ? uf.find(1): 0;
    }
}
class UF {
    int[] p;
    public UF(int n) {
        p = new int[n];
        Arrays.setAll(p, i -> i);
    }
    public int find(int i) {
        return i == p[i] ? i : (p[i] = find(p[p[i]]));
    }
    public void union(int i, int j) {
        int pi = find(i), pj = find(j);
        if (pi == pj) return;
        if (pj > pi) p[pi] = pj;
        else p[pj] = pi;
    }
}
