class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numStorage;
        for(int i = 0; i < nums.size(); i++){
            //iter over the vector, check if in numStorage, return if so, otherwise add to numStorage
            if(numStorage.find(nums[i]) != numStorage.end()) {return true;}
            numStorage.insert(nums[i]);
        }
        return false;
        
    }
};