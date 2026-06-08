class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currentMax = 0;
        int currentMin = 0;
        int globalMax = nums[0];
        int globalMin = nums[0];
        int totalSum = 0;
        for(int element : nums){
            totalSum += element;
            currentMax = max(currentMax, 0);
            currentMax += element;
            
            currentMin = min(currentMin, 0);
            currentMin += element;

            globalMax = max(currentMax, globalMax);
            globalMin = min(currentMin, globalMin);
        }

        if (globalMax < 0) return globalMax;
        return (globalMax < (totalSum - globalMin)) ? totalSum - globalMin : globalMax;
        
    }
};