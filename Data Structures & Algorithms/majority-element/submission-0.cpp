class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int halfNums = nums.size() / 2; 
        std::unordered_map<int, int> elementHash;
        for(const auto& elements : nums){
            elementHash[elements]++;
        }
        for(const auto& pairs : elementHash){
            if(pairs.second > halfNums) return pairs.first;
        }
        
    }
};