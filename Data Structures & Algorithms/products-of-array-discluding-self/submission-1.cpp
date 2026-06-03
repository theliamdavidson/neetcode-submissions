class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int vecSize = nums.size();
        vector<int> outputVec(vecSize, 1);
        for(int i = 1; i < vecSize; ++i){
            outputVec[i] = (outputVec[i-1]*nums[i-1]);
        }
        int postfix = 1;
        for (int i = vecSize-1; i >= 0; --i) {
            outputVec[i] *= postfix;
            postfix *= nums[i];
        }
        return outputVec;
    }
};
