class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>returnList = nums;
        for(int i = 0; i<nums.size(); i++){
            returnList.push_back(nums[i]);
        }
        return returnList;
    }
};