class Solution {
    public int[] findRightInterval(int[][] intervals) {
        int n = intervals.length;
        int[] right = new int[n];
        Map<Integer,Integer> index = new HashMap<>();
        for(int i=0;i<n;i++){
            index.put(intervals[i][0],i);
        }
        Arrays.sort(intervals,new Comparator<int[]>(){
            public int compare(int[] i1,int[] i2){
                return i1[0]-i2[0];
            }
        });
        for(int i=0;i<n;i++){
            int target = intervals[i][1];
            int low=i,high=n-1;
            while(low<=high){
                int mid = (low+high)>>1;
                if(intervals[mid][0]>=target)high=mid-1;
                else low=mid+1;
            }
            right[index.get(intervals[i][0])]=low==n?-1:index.get(intervals[low][0]); 
        }
        return right;
    }
}