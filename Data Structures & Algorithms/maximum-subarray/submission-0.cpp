class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int maxNum = nums[0];
        for(int i = 0; i < len; i++){
            int current = 0;
            for(int j = i; j < len; j++){
                current+=nums[j];
                maxNum = max(maxNum, current);
            }
        }
        return maxNum;
    }
};
