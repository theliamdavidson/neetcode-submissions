class Solution {
public:
    int m_numsLen = 0;

    int solve(int index, int currentXorValue, vector<int>& nums){
        if(index == m_numsLen) return currentXorValue;
        return solve(index + 1, currentXorValue ^ nums[index], nums) + solve(index + 1, currentXorValue, nums);
    }

    int subsetXORSum(vector<int>& nums) {
        m_numsLen = nums.size();
        return solve(0, 0, nums);
    }
};