class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = 0;

        for(int element : nums){
            currentSum = max(currentSum, 0);
            currentSum += element;
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};
