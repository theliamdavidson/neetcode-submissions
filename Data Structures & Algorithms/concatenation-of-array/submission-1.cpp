class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>returnList;
        for(int run = 0; run < 2; run++){
            for(int i = 0; i<nums.size(); i++){
                returnList.push_back(nums[i]);
            }
        }
        return returnList;
    }
};