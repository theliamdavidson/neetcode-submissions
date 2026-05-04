class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> returnList;
        for( int i = 0; i < nums.size()-1; i++){
            for( int j = i + 1; j < nums.size(); j++){
                if(nums[i]+nums[j] == target) {
                    returnList.push_back(i);
                    returnList.push_back(j);
                    return returnList;
                }
            }
        }
        return {};
    }
};
