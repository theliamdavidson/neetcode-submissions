class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int vecSize = nums.size();
        vector<int> prefix(vecSize);
        vector<int> postfix(vecSize);
        vector<int> outputVec(vecSize);
        prefix[0] = nums[0];
        postfix[vecSize - 1] = nums[vecSize - 1];
        for(int i = 1; i < vecSize; ++i){
            prefix[i] = (prefix[i-1]*nums[i]);
        }
        for(int i = vecSize - 2; i >= 0; --i){
            postfix[i] = (postfix[i+1]*nums[i]);
        }
        for(int i = 0; i < vecSize; ++i){
            if(i == 0) outputVec[i] = postfix[i+1];
            else if (i == vecSize-1) outputVec[i] = prefix[i-1];
            else{
                outputVec[i] = prefix[i-1] * postfix[i+1];
            }
        }
        return outputVec;
    }
};
