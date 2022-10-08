class findallduplicatesinanarray {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> list=new ArrayList<Integer>();
        HashSet<Integer> hm = new HashSet<Integer>();
        for(int i=0;i<nums.length;i++){
            if(hm.add(nums[i])==false){
                list.add(nums[i]);
            }
        }
        Collections.sort(list);
        return list;
    }
}