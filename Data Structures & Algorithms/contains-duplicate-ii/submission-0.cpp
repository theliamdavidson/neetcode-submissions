class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_set<int> slidingWindow;
        int left = 0;
        for(int right = 0; right < nums.size(); ++right){
            if(right - left > k){
                slidingWindow.erase(nums[left]);
                ++left;
            }
            if(slidingWindow.contains(nums[right])){
                return true;
            }
            slidingWindow.insert(nums[right]);
        }
        return false;
    }
};