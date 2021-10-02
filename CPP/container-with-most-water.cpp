class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_volume = min(height.front(), height.back()) * (height.size() - 1);
        int low = 0;
        int high = height.size() - 1;
        while (low < high) {
            // Greedy: keep the longer pole in the choices.
            if (height[low] < height[high]) {
                low++; 
            } else {
                high--;
            }
            max_volume = max(max_volume, volume(height, low, high));
        }
        return max_volume;
    }

    int volume(const vector<int>& height, int low, int high) {
        return min(height[low], height[high]) * (high - low);
    }
    
    int maxArea_brutal(vector<int>& height) {
        int max_volume = 0;
        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                auto volume = min(height[i], height[j]) * (j - i);
                max_volume = max(max_volume, volume);
            }
        }
        return max_volume;
    }
};
