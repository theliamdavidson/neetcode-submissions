class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int vecSize = nums.size();
        vector<int> outputVec(vecSize, 1);
        int prefix = 1;
        for(int i = 0; i < vecSize; ++i){
            outputVec[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for (int i = vecSize-1; i >= 0; --i) {
            outputVec[i] *= postfix;
            postfix *= nums[i];
        }
        return outputVec;
    }
};
