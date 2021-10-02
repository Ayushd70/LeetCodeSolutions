class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

	vector<vector<int>> v;
	sort(nums.begin(),nums.end());

	if(nums.size()==0 || nums.size()==1 ||  nums.size()==2) return v;

	int i=0;

	for(i;i<nums.size()-2;++i){

	if(i>0 && nums[i]==nums[i-1]) continue;

	int k=nums.size()-1,j=i+1;

	while(j<k){
		if(nums[i]+nums[j]+nums[k]==0){

			v.push_back({nums[i],nums[j],nums[k]});
			int val1=nums[j];
			while(j<k and val1==nums[j]) j++;
			int val2=nums[k];
			while(j<k and val2==nums[k]) k--; 

		}else if(nums[i]+nums[j]+nums[k]>0){
			k--;
		}else{
			j++;
		}
	}
}
	return v;
}
};
