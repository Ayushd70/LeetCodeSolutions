class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix.size();
        int j = matrix[0].size();
        
        int s = 0;
        int e = i * j - 1;
        
        int mid = s + (e - s) / 2;
        
        while (s <= e){
            int element = matrix[mid / j][mid % j];
            if (element == target){
                return 1;
            }
            else if (element < target){
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return 0;
    }
};